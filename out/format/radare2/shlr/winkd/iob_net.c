# 1 "project/radare2/shlr/winkd/iob_net.c"

#include <errno.h>

#include <r_crypto.h>
#include <r_hash.h>
#include <r_socket.h>
#include <r_util.h>

#include "kd.h"
#include "transport.h"

typedef struct iobnet_t {
 RSocket *sock;
 bool hasDatakey;


 ut8 buf[4096];
 int off;
 int size;


 ut8 key[32];

 ut8 datakey[32];

 ut8 hmackey[KDNET_HMACKEY_SIZE];

 ut8 version;
} iobnet_t;


static const char d32[] = "[\\]^_`abcd$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$efghijklmnopqrstuvwxyz{|}~";

static const ut64 pow36[] = { 1, 36, 1296, 46656, 1679616, 60466176, 2176782336,
 78364164096, 2821109907456, 101559956668416, 3656158440062976,
 131621703842267136, 4738381338321616896 };

static ut64 base36_decode(const char *str) {
 ut64 ret = 0;
 size_t i;
 size_t len = strlen (str);

 if (len > 13) {
  eprintf ("Error: base36_decode supports up to 64-bit values only\n");
  return 0;
 }
 for (i = 0; i < len; i++) {
  char c = str[len - i - 1];

  if (c < '0' || c > 'z' || ('9' < c && c < 'a')) {
   eprintf ("Error: %s is not a valid base36 encoded string\n", str);
   return 0;
  }
  ut8 v = d32[c - '0'];

  if (v == '$') {
   eprintf ("Error: %s is not a valid base36 encoded string\n", str);
   return 0;
  }
  v -= 91;

  if (i == 12) {
   if (v > 3 || UT64_ADD_OVFCHK (ret, v * pow36[i])) {
    printf ("Error: base36_decode supports up to 64-bit values only\n");
    return 0;
   }
  }
  ret += v * pow36[i];
 }
 return ret;
}






static bool _initializeDatakey(iobnet_t *obj, ut8 *resbuf, int size) {
 RHash *ctx = r_hash_new (true, R_HASH_SHA256);
 if (!ctx) {
  return false;
 }

 r_hash_do_begin (ctx, R_HASH_SHA256);
 r_hash_do_sha256 (ctx, obj->key, R_HASH_SIZE_SHA256);
 r_hash_do_sha256 (ctx, resbuf, size);
 r_hash_do_end (ctx, R_HASH_SHA256);
 memcpy (obj->datakey, ctx->digest, R_HASH_SIZE_SHA256);

 r_hash_free (ctx);
 return true;
}

static void *iob_net_open(const char *path) {
 size_t i;

 iobnet_t *obj = R_NEW0 (iobnet_t);
 if (!obj) {
  return NULL;
 }

 char *host = strdup (path);
 char *port = strchr (host, ':');
 if (R_STR_ISEMPTY (port)) {
  eprintf ("Missing port. Use winkd://host:udp-port:x.x.x.x.\n");
  free (host);
  free (obj);
  return NULL;
 }
 *port++ = 0;
 char *key = strchr (port, ':');
 if (R_STR_ISEMPTY (key)) {
  eprintf ("Missing key. Use winkd://host:udp-port:x.x.x.x.\n");
  free (host);
  free (obj);
  return NULL;
 }
 *key++ = 0;


 char *nkey;
 for (i = 0; i < 4 && key; key = nkey, i++) {
  nkey = strchr (key, '.');
  if (nkey) {
   *nkey++ = 0;
  }
  r_write_le64 (obj->key + i * 8, base36_decode (key));
 }


 for (i = 0; i < 32; i++) {
  obj->hmackey[i] = ~(obj->key[i]);
 }

 RSocket *sock = r_socket_new (0);
 if (!r_socket_connect_udp (sock, host, port, 1)) {
  free (host);
  free (obj);
  r_socket_free (sock);
  return NULL;
 }
 obj->sock = sock;

 free (host);
 return (void *)obj;
}

static bool iob_net_close(void *p) {
 int ret = true;
 iobnet_t *obj = (iobnet_t *)p;

 if (r_socket_close (obj->sock)) {
  ret = false;
 }

 r_socket_free (obj->sock);
 free (obj);
 return ret;
}

static bool _encrypt(iobnet_t *obj, ut8 *buf, int size, int type) {
 bool ret = false;
 RCrypto *cry = r_crypto_new ();
 if (!cry) {
  return false;
 }
 if (!r_crypto_use (cry, "aes-cbc")) {
  goto end;
 }


 switch (type) {
 case KDNET_PACKET_TYPE_DATA:
  if (!r_crypto_set_key (cry, obj->datakey, sizeof (obj->datakey), 0, 0)) {
   goto end;
  }
  break;
 case KDNET_PACKET_TYPE_CONTROL:
  if (!r_crypto_set_key (cry, obj->key, sizeof (obj->key), 0, 0)) {
   goto end;
  }
  break;
 default:
  goto end;
 }


 if (!r_crypto_set_iv (cry, buf + size - KDNET_HMAC_SIZE, KDNET_HMAC_SIZE)) {
  goto end;
 }


 if (r_crypto_final (cry, buf, size - KDNET_HMAC_SIZE) == 0) {
  goto end;
 }

 int sz;
 ut8 *encbuf = r_crypto_get_output (cry, &sz);
 if (!encbuf) {
  goto end;
 }
 memcpy (buf, encbuf, size - KDNET_HMAC_SIZE);

 free (encbuf);
 ret = true;
end:
 r_crypto_free (cry);
 return ret;
}
# 221 "project/radare2/shlr/winkd/iob_net.c"
static ut8 *_createKDNetPacket(iobnet_t *obj, const ut8 *buf, int size, int *osize, ut64 seqno, ut8 type) {


 ut8 padsize = -(size + 8) & 0x0F;

 int encsize = sizeof (kdnet_packet_t) + KDNET_DATA_SIZE + size + padsize + KDNET_HMAC_SIZE;
 ut8 *encbuf = calloc (1, encsize);
 if (!encbuf) {
  return NULL;
 }


 r_write_at_be32 (encbuf, KDNET_MAGIC, 0);
 r_write_at_be8 (encbuf, obj->version, 4);
 r_write_at_be8 (encbuf, type, 5);




 r_write_at_be64 (encbuf, ((seqno << 8) | 0x8 << 4 | padsize), 6);


 memcpy (encbuf + sizeof (kdnet_packet_t) + KDNET_DATA_SIZE, buf, size);


 int off = sizeof (kdnet_packet_t) + KDNET_DATA_SIZE + size + padsize;
 RHash *ctx = r_hash_new (true, R_HASH_SHA256);
 if (!ctx) {
  free (encbuf);
  return NULL;
 }
 r_hash_do_hmac_sha256 (ctx, encbuf, off, obj->hmackey, KDNET_HMACKEY_SIZE);

 memcpy (encbuf + off, ctx->digest, KDNET_HMAC_SIZE);
 r_hash_free (ctx);


 if (!_encrypt (obj, encbuf + sizeof (kdnet_packet_t), encsize - sizeof (kdnet_packet_t), type)) {
  free (encbuf);
  return NULL;
 }

 if (osize) {
  *osize = encsize;
 }
 return encbuf;
}

static bool _decrypt(iobnet_t *obj, ut8 *buf, int size, int type) {
 bool ret = false;
 RCrypto *cry = r_crypto_new ();
 if (!cry) {
  return false;
 }
 if (!r_crypto_use (cry, "aes-cbc")) {
  goto end;
 }


 switch (type) {
 case KDNET_PACKET_TYPE_DATA:
  if (!r_crypto_set_key (cry, obj->datakey, sizeof (obj->datakey), 0, 1)) {
   goto end;
  }
  break;
 case KDNET_PACKET_TYPE_CONTROL:
  if (!r_crypto_set_key (cry, obj->key, sizeof (obj->key), 0, 1)) {
   goto end;
  }
  break;
 default:
  goto end;
 }


 if (!r_crypto_set_iv (cry, buf + size - KDNET_HMAC_SIZE, KDNET_HMAC_SIZE)) {
  goto end;
 }


 if (r_crypto_final (cry, buf, size - KDNET_HMAC_SIZE) == 0) {
  goto end;
 }

 int sz;
 ut8 *decbuf = r_crypto_get_output (cry, &sz);
 if (!decbuf) {
  goto end;
 }
 memcpy (buf, decbuf, size - KDNET_HMAC_SIZE);
 ret = true;

 free (decbuf);
end:
 r_crypto_free (cry);
 return ret;
}






static bool _sendResponsePacket(iobnet_t *obj, const ut8 *pokedata) {
 size_t i;
 int size;







 ut8 *resbuf = calloc (1, 322);
 if (!resbuf) {
  return false;
 }

 resbuf[0] = 0x01;
 resbuf[1] = 0x02;

 memcpy (resbuf + 2, pokedata + 10, 32);

 for (i = 0; i < 32; i++) {
  int rand = r_num_rand (0xFF);
  resbuf[i + 34] = rand & 0xFF;
 }


 ut64 seqno = r_read_be64 (pokedata) >> 8;
 ut8 *pkt = _createKDNetPacket (obj, resbuf, 322, &size, seqno, 1);
 if (!pkt) {
  R_FREE (resbuf);
 }

 if (r_socket_write (obj->sock, (void *)pkt, size) < 0) {
  free (pkt);
  free (resbuf);
  return false;
 }

 _initializeDatakey (obj, resbuf, 322);
 obj->hasDatakey = true;

 free (pkt);
 free (resbuf);
 return true;
}

static bool _processControlPacket(iobnet_t *obj, const ut8 *ctrlbuf, int size) {
 if (obj->hasDatakey) {
  return true;
 }

 ut64 kdnetdata = r_read_be64 (ctrlbuf);
 if ((kdnetdata & 0x80) != 0) {
  eprintf ("Error: KdNet wrong direction flag\n");
  return false;
 }


 if (!_sendResponsePacket (obj, ctrlbuf)) {
  eprintf ("Error: KdNet sending the response packet\n");
  return false;
 }

 return true;
}

bool _verifyhmac(iobnet_t *obj) {
 RHash *ctx = r_hash_new (true, R_HASH_SHA256);
 if (!ctx) {
  return false;
 }
 r_hash_do_hmac_sha256 (ctx, obj->buf, obj->size - KDNET_HMAC_SIZE, obj->hmackey, KDNET_HMACKEY_SIZE);
 int ret = memcmp (ctx->digest, obj->buf + obj->size - KDNET_HMAC_SIZE, KDNET_HMAC_SIZE);

 r_hash_free (ctx);
 return ret == 0;
}

static int iob_net_read(void *p, uint8_t *obuf, const uint64_t count, const int timeout) {
 kdnet_packet_t pkt = { 0 };
 iobnet_t *obj = (iobnet_t *)p;

 if (obj->size == 0) {
  do {
   obj->size = r_socket_read (obj->sock, obj->buf, 4096);
   if (obj->size < 0) {

    if (errno == EINTR) {
     continue;
    }
    obj->size = 0;
    return -1;
   }
   memcpy (&pkt, obj->buf, sizeof (kdnet_packet_t));


   if (r_read_be32 (obj->buf) != KDNET_MAGIC) {
    eprintf ("Error: KdNet bad magic\n");
    obj->size = 0;
    return -1;
   }


   if (!_decrypt (obj, obj->buf + sizeof (kdnet_packet_t), obj->size - sizeof (kdnet_packet_t), pkt.type)) {
    obj->size = 0;
    return -1;
   }


   if (!_verifyhmac (obj)) {
    eprintf ("Error: KdNet failed authentication\n");
    obj->size = 0;
    return -1;
   }


   if (pkt.type == KDNET_PACKET_TYPE_CONTROL) {
    obj->version = pkt.version;
    if (!_processControlPacket (obj, obj->buf + sizeof (kdnet_packet_t), obj->size)) {
     eprintf ("Error: KdNet failed to process Control packet\n");
     obj->size = 0;
     return -1;
    };
    obj->size = 0;
   }
  } while (pkt.type == KDNET_PACKET_TYPE_CONTROL);


  ut8 padsize = r_read_at_be64 (obj->buf, sizeof (kdnet_packet_t)) & 0xF;
  obj->size -= KDNET_HMAC_SIZE + padsize;


  obj->off = sizeof (kdnet_packet_t) + KDNET_DATA_SIZE;



  if (r_read_at_be16 (obj->buf, obj->off + 4) == KD_PACKET_TYPE_UNUSED) {
   obj->size += 4;
  }
 }

 if (count + obj->off > obj->size) {
  eprintf ("Error: KdNet out-of-bounds read\n");
  obj->size = 0;
  return -1;
 }


 memcpy (obuf, obj->buf + obj->off, count);
 obj->off += count;


 if (obj->off == obj->size) {
  obj->size = 0;
 }

 return count;
}

static int iob_net_write(void *p, const uint8_t *buf, const uint64_t count, const int timeout) {
 static ut64 seqno = 1;
 iobnet_t *obj = (iobnet_t *)p;

 if (obj->size == 0) {

  if (count == sizeof (kd_packet_t)) {
   kd_packet_t pkt;
   memcpy (&pkt, buf, sizeof (kd_packet_t));

   obj->size = sizeof (kd_packet_t) + pkt.length;
   obj->off = count;
   memcpy (obj->buf, buf, count);
  } else {
   memcpy (obj->buf, buf, count);
   obj->size = count;
   obj->off = count;
  }
 } else {
  memcpy (obj->buf + obj->off, buf, count);
  obj->off += count;
 }

 if (obj->off == obj->size) {
  int size;
  ut8 *pkt = _createKDNetPacket (obj, obj->buf, obj->size, &size, seqno, 0);
  if (!pkt) {
   return -1;
  }
  if (r_socket_write (obj->sock, (void *)pkt, size) < 0) {
   free (pkt);
   return -1;
  }
  seqno++;

  obj->size = 0;
  free (pkt);
 }

 return count;
}

io_backend_t iob_net = {
 .name = "kdnet",
 .type = KD_IO_NET,
 .init = NULL,
 .deinit = NULL,
 .config = NULL,
 .open = &iob_net_open,
 .close = &iob_net_close,
 .read = &iob_net_read,
 .write = &iob_net_write,
};
