# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimikatz/modules/crypto/kuhl_m_crypto_extractor.h"





       
#include "../kuhl_m.h"
#include "../../../modules/kull_m_crypto.h"
#include "../../../modules/kull_m_memory.h"
#include "../../../modules/kull_m_process.h"

void kuhl_m_crypto_extractor_capi32(PKULL_M_MEMORY_ADDRESS address);
void kuhl_m_crypto_extractor_bcrypt32(PKULL_M_MEMORY_ADDRESS address);
#if defined(_M_X64) || defined(_M_ARM64)
void kuhl_m_crypto_extractor_capi64(PKULL_M_MEMORY_ADDRESS address);
void kuhl_m_crypto_extractor_bcrypt64(PKULL_M_MEMORY_ADDRESS address);
#endif

DWORD kuhl_m_crypto_extractor_GetKeySizeForEncryptMemory(DWORD size);
DWORD kuhl_m_crypto_extractor_GetKeySize(DWORD bits);

NTSTATUS kuhl_m_crypto_extract(int argc, wchar_t * argv[]);

typedef struct _KIWI_CRYPTPROV {
 PVOID CPAcquireContext;
 PVOID CPReleaseContext;
 PVOID CPGenKey;
 PVOID CPDeriveKey;
 PVOID CPDestroyKey;
 PVOID CPSetKeyParam;
 PVOID CPGetKeyParam;
 PVOID CPExportKey;
 PVOID CPImportKey;
 PVOID CPEncrypt;
 PVOID CPDecrypt;
 PVOID CPCreateHash;
 PVOID CPHashData;
 PVOID CPHashSessionKey;
 PVOID CPDestroyHash;
 PVOID CPSignHash;
 PVOID CPVerifySignature;
 PVOID CPGenRandom;
 PVOID CPGetUserKey;
 PVOID CPSetProvParam;
 PVOID CPGetProvParam;
 PVOID CPSetHashParam;
 PVOID CPGetHashParam;
 PVOID unk0;
 PVOID CPDuplicateKey;
 PVOID CPDuplicateHash;
 PVOID unk1;
 PVOID ImageBase;
 PVOID obfUnk2;
} KIWI_CRYPTPROV, *PKIWI_CRYPTPROV;

typedef struct _KIWI_BCRYPT_GENERIC_KEY_HEADER {
 DWORD size;
 DWORD tag;
 DWORD type;
} KIWI_BCRYPT_GENERIC_KEY_HEADER, *PKIWI_BCRYPT_GENERIC_KEY_HEADER;

typedef struct _KIWI_BCRYPT_BIGNUM_Header {
 DWORD tag;
 DWORD unkLen0;
 DWORD size;
 DWORD unk0;
} KIWI_BCRYPT_BIGNUM_Header, *PKIWI_BCRYPT_BIGNUM_Header;

typedef struct _KIWI_BCRYPT_BIGNUM_Div {
 KIWI_BCRYPT_BIGNUM_Header Header;
 DWORD unk0;
 DWORD unk1;
 DWORD unk2;
 DWORD unk3;
 KIWI_BCRYPT_BIGNUM_Header bn;
} KIWI_BCRYPT_BIGNUM_Div, *PKIWI_BCRYPT_BIGNUM_Div;

typedef struct _KIWI_PRIV_STRUCT_32 {
 DWORD32 strangeStruct;







} KIWI_PRIV_STRUCT_32, *PKIWI_PRIV_STRUCT_32;

typedef struct _KIWI_RAWKEY32 {
 DWORD32 obfUnk0;
 ALG_ID Algid;
 DWORD Flags;
 DWORD dwData;

 DWORD32 Data;
 DWORD unk0;
 DWORD unk1;
 DWORD32 unk2;
 DWORD unk3;
 BYTE IV[32];
 DWORD unk4;
 DWORD dwSalt;
 BYTE Salt[24];
 DWORD unk5;
 DWORD dwMode;
 DWORD dwModeBits;
 DWORD dwPermissions;
 DWORD dwEffectiveKeyLen;
 DWORD32 OaepParamsLen;
 DWORD dwOaepParamsLen;
 DWORD dwBlockLen;
} KIWI_RAWKEY32, *PKIWI_RAWKEY32;

typedef struct _KIWI_RAWKEY_51_32 {
 DWORD32 obfUnk0;
 ALG_ID Algid;
 DWORD Flags;
 DWORD dwData;

 DWORD32 Data;
 DWORD unk1;
 DWORD unk3;
 BYTE IV[32];
 DWORD unk4;
 DWORD dwSalt;
 BYTE Salt[24];
 DWORD unk5;
 DWORD dwMode;
 DWORD dwModeBits;
 DWORD dwPermissions;
 DWORD dwEffectiveKeyLen;
 DWORD32 OaepParamsLen;
 DWORD dwOaepParamsLen;
 DWORD dwBlockLen;
} KIWI_RAWKEY_51_32, *PKIWI_RAWKEY_51_32;

typedef struct _KIWI_UNK_INT_KEY32 {
 DWORD32 KiwiRawKey;
 DWORD unk0;
} KIWI_UNK_INT_KEY32, *PKIWI_UNK_INT_KEY32;

typedef struct _KIWI_CRYPTKEY32 {
 DWORD32 CPGenKey;
 DWORD32 CPDeriveKey;
 DWORD32 CPDestroyKey;
 DWORD32 CPSetKeyParam;
 DWORD32 CPGetKeyParam;
 DWORD32 CPExportKey;
 DWORD32 CPImportKey;
 DWORD32 CPEncrypt;
 DWORD32 CPDecrypt;
 DWORD32 CPDuplicateKey;
 DWORD32 KiwiProv;
 DWORD32 obfKiwiIntKey;
} KIWI_CRYPTKEY32, *PKIWI_CRYPTKEY32;


typedef struct _KIWI_BCRYPT_BIGNUM_Int32 {
 KIWI_BCRYPT_BIGNUM_Header Header;
 BYTE data[ANYSIZE_ARRAY];
} KIWI_BCRYPT_BIGNUM_Int32, *PKIWI_BCRYPT_BIGNUM_Int32;

typedef struct _KIWI_BCRYPT_BIGNUM_ComplexType32 {
 KIWI_BCRYPT_BIGNUM_Header Header;
 DWORD unkLenFlags0;
 DWORD unk0;
 BYTE unkArray0[8];
 DWORD32 unkDataAfter;
 DWORD unk1;
 DWORD unk2;
 DWORD unk3;
 KIWI_BCRYPT_BIGNUM_Header bn;
} KIWI_BCRYPT_BIGNUM_ComplexType32, *PKIWI_BCRYPT_BIGNUM_ComplexType32;

typedef struct _KIWI_BCRYPT_ASYM_KEY_DATA_10_32 {
 DWORD size;
 DWORD unk0;
 DWORD len0;
 DWORD len1;
 DWORD unk1;
 DWORD unk2;
 DWORD unk3;
 DWORD unk4;
 DWORD unk5;
 DWORD len2;
 DWORD len3;
 DWORD unk6;
 DWORD unk7;
 DWORD unk8;
 DWORD32 Prime1;
 DWORD32 Prime2;
 DWORD32 unkArray0;
 DWORD32 unkArray1;
 DWORD32 PublicExponent;
 DWORD32 PrivateExponent;
 DWORD32 Exponent1;
 DWORD32 Exponent2;
 DWORD32 Modulus;
 DWORD32 _Prime1;
 DWORD32 _Prime2;
 DWORD32 _unkArray0;
 DWORD32 _unkArray1;
 DWORD32 _PublicExponent;
 DWORD32 _PrivateExponent;
 DWORD32 _Exponent1;
 DWORD32 _Exponent2;
 DWORD32 unk9;
} KIWI_BCRYPT_ASYM_KEY_DATA_10_32, *PKIWI_BCRYPT_ASYM_KEY_DATA_10_32;

typedef struct _KIWI_BCRYPT_ASYM_KEY_10_32 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD bits;
 DWORD unk0;
 DWORD32 unk1;
 DWORD32 data;
} KIWI_BCRYPT_ASYM_KEY_10_32, *PKIWI_BCRYPT_ASYM_KEY_10_32;

typedef struct _KIWI_BCRYPT_ASYM_KEY_Bignum_81_32 {
 DWORD32 nbBlock;
 DWORD32 unk0;
 DWORD32 unk1;
 DWORD bits;
 DWORD unk2;
 DWORD32 unkLock0;
 DWORD32 unkLock1;
 DWORD32 unkLock2;
 DWORD32 Prime;
 DWORD32 unkData0;
 DWORD32 unkData1;
 DWORD32 unkData2;
 DWORD32 unk3;
 DWORD32 Bcrypt_modmul;
 DWORD32 unk4;
 DWORD32 Bcrypt_modexp;
 DWORD32 unk5;
} KIWI_BCRYPT_ASYM_KEY_Bignum_81_32, *PKIWI_BCRYPT_ASYM_KEY_Bignum_81_32;

typedef struct _KIWI_BCRYPT_ASYM_KEY_81_32 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD bits0;
 DWORD unk0;
 DWORD32 unk1;
 DWORD unk2;
 DWORD bits1;
 DWORD nbModulus;
 DWORD nbExp1 ;
 DWORD nbExp2;
 DWORD Tag;
 DWORD Size;
 DWORD32 PublicExponent;
 DWORD32 _PublicExponent;
 DWORD32 Modulus;
 DWORD32 Exponent1;
 DWORD32 Exponent2;
 DWORD32 Coefficient;
 DWORD32 unk3;
 KIWI_BCRYPT_ASYM_KEY_Bignum_81_32 bnPrime1;
 KIWI_BCRYPT_ASYM_KEY_Bignum_81_32 bnPrime2;
} KIWI_BCRYPT_ASYM_KEY_81_32, *PKIWI_BCRYPT_ASYM_KEY_81_32;

typedef struct _KIWI_BCRYPT_ASYM_KEY_Bignum_6_32 {
 DWORD32 nbBlock;
 DWORD32 unk0;
 DWORD32 unk1;
 DWORD bits;
 DWORD unk2;
 DWORD32 unkLock0;
 DWORD32 unkLock1;
 DWORD32 unkLock2;
 DWORD32 Prime;
 DWORD32 unkData0;
 DWORD32 unkData1;
 DWORD32 unkData2;
 DWORD32 unk3;
 DWORD32 Bcrypt_modmul;
 DWORD32 unk4;

} KIWI_BCRYPT_ASYM_KEY_Bignum_6_32, *PKIWI_BCRYPT_ASYM_KEY_Bignum_6_32;

typedef struct _KIWI_BCRYPT_ASYM_KEY_6_32 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD bits0;
 DWORD unk0;
 DWORD32 unk1;
 DWORD unk2;
 DWORD bits1;
 DWORD nbModulus;
 DWORD nbExp1 ;
 DWORD nbExp2;
 DWORD Tag;
 DWORD Size;
 DWORD32 PublicExponent;
 DWORD32 _PublicExponent;
 DWORD32 Modulus;
 DWORD32 Exponent1;
 DWORD32 Exponent2;
 DWORD32 Coefficient;
 DWORD32 unk3;
 KIWI_BCRYPT_ASYM_KEY_Bignum_6_32 bnPrime1;
 KIWI_BCRYPT_ASYM_KEY_Bignum_6_32 bnPrime2;
} KIWI_BCRYPT_ASYM_KEY_6_32, *PKIWI_BCRYPT_ASYM_KEY_6_32;

typedef struct _KIWI_BCRYPT_SYM_KEY_81_32 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD dwMode;
 DWORD dwBlockLen;
 DWORD unk0;
 DWORD dwEffectiveKeyLen;
 DWORD unk1;
 DWORD32 unk2;
 BYTE IV[16];
 DWORD dwData;
 BYTE Data[32];

} KIWI_BCRYPT_SYM_KEY_81_32, *PKIWI_BCRYPT_SYM_KEY_81_32;

typedef struct _KIWI_BCRYPT_SYM_KEY_80_32 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD dwMode;
 DWORD dwBlockLen;
 DWORD unk0;
 DWORD dwEffectiveKeyLen;
 DWORD32 unk1;
 DWORD dwData;
 BYTE Data[64];
 BYTE IV[16];

} KIWI_BCRYPT_SYM_KEY_80_32, *PKIWI_BCRYPT_SYM_KEY_80_32;

typedef struct _KIWI_BCRYPT_SYM_KEY_6_32 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD dwMode;
 DWORD dwBlockLen;
 DWORD dwEffectiveKeyLen;
 DWORD dwData;
 BYTE Data[64];

 BYTE IV[ANYSIZE_ARRAY ];
} KIWI_BCRYPT_SYM_KEY_6_32, *PKIWI_BCRYPT_SYM_KEY_6_32;

typedef struct _KIWI_BCRYPT_HANDLE_KEY32 {
 DWORD size;
 DWORD tag;
 DWORD32 hAlgorithm;
 DWORD32 key;
 DWORD32 unk0;
} KIWI_BCRYPT_HANDLE_KEY32, *PKIWI_BCRYPT_HANDLE_KEY32;

#if defined(_M_X64) || defined(_M_ARM64)

typedef struct _KIWI_PRIV_STRUCT_64 {
 DWORD64 strangeStruct;







} KIWI_PRIV_STRUCT_64, *PKIWI_PRIV_STRUCT_64;

typedef struct _KIWI_RAWKEY64 {
 DWORD64 obfUnk0;
 ALG_ID Algid;
 DWORD Flags;
 DWORD dwData;

 DWORD64 Data;
 DWORD unk0;
 DWORD unk1;
 DWORD64 unk2;
 DWORD unk3;
 BYTE IV[32];
 DWORD unk4;
 DWORD dwSalt;
 BYTE Salt[24];
 DWORD unk5;
 DWORD dwMode;
 DWORD dwModeBits;
 DWORD dwPermissions;
 DWORD dwEffectiveKeyLen;
 DWORD64 OaepParamsLen;
 DWORD dwOaepParamsLen;
 DWORD dwBlockLen;
} KIWI_RAWKEY64, *PKIWI_RAWKEY64;

typedef struct _KIWI_UNK_INT_KEY64 {
 DWORD64 KiwiRawKey;
 DWORD unk0;
} KIWI_UNK_INT_KEY64, *PKIWI_UNK_INT_KEY64;

typedef struct _KIWI_CRYPTKEY64 {
 DWORD64 CPGenKey;
 DWORD64 CPDeriveKey;
 DWORD64 CPDestroyKey;
 DWORD64 CPSetKeyParam;
 DWORD64 CPGetKeyParam;
 DWORD64 CPExportKey;
 DWORD64 CPImportKey;
 DWORD64 CPEncrypt;
 DWORD64 CPDecrypt;
 DWORD64 CPDuplicateKey;
 DWORD64 KiwiProv;
 DWORD64 obfKiwiIntKey;
} KIWI_CRYPTKEY64, *PKIWI_CRYPTKEY64;


typedef struct _KIWI_BCRYPT_BIGNUM_Int64 {
 KIWI_BCRYPT_BIGNUM_Header Header;
 DWORD unk[4];
 BYTE data[ANYSIZE_ARRAY];
} KIWI_BCRYPT_BIGNUM_Int64, *PKIWI_BCRYPT_BIGNUM_Int64;

typedef struct _KIWI_BCRYPT_BIGNUM_ComplexType64 {
 KIWI_BCRYPT_BIGNUM_Header Header;
 DWORD unkLenFlags0;
 DWORD unk0;
 DWORD align0[2];
 BYTE unkArray0[8];
 DWORD64 unkDataAfter;
 DWORD unk1;
 DWORD unk2;
 DWORD unk3;
 DWORD align1;
 KIWI_BCRYPT_BIGNUM_Header bn;
} KIWI_BCRYPT_BIGNUM_ComplexType64, *PKIWI_BCRYPT_BIGNUM_ComplexType64;

typedef struct _KIWI_BCRYPT_ASYM_KEY_DATA_10_64 {
 DWORD size;
 DWORD unk0;
 DWORD len0;
 DWORD len1;
 DWORD unk1;
 DWORD unk2;
 DWORD unk3;
 DWORD unk4;
 DWORD unk5;
 DWORD len2;
 DWORD len3;
 DWORD unk6;
 DWORD unk7;
 DWORD unk8;
 DWORD64 Prime1;
 DWORD64 Prime2;
 DWORD64 unkArray0;
 DWORD64 unkArray1;
 DWORD64 PublicExponent;
 DWORD64 PrivateExponent;
 DWORD64 Exponent1;
 DWORD64 Exponent2;
 DWORD64 Modulus;
 DWORD64 _Prime1;
 DWORD64 _Prime2;
 DWORD64 _unkArray0;
 DWORD64 _unkArray1;
 DWORD64 _PublicExponent;
 DWORD64 _PrivateExponent;
 DWORD64 _Exponent1;
 DWORD64 _Exponent2;
 DWORD64 unk9;
} KIWI_BCRYPT_ASYM_KEY_DATA_10_64, *PKIWI_BCRYPT_ASYM_KEY_DATA_10_64;

typedef struct _KIWI_BCRYPT_ASYM_KEY_10_64 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD bits;
 DWORD unk0;
 DWORD64 unk1;
 DWORD64 data;
} KIWI_BCRYPT_ASYM_KEY_10_64, *PKIWI_BCRYPT_ASYM_KEY_10_64;

typedef struct _KIWI_BCRYPT_ASYM_KEY_Bignum_81_64 {
 DWORD64 nbBlock;
 DWORD64 unk0;
 DWORD64 unk1;
 DWORD bits;
 DWORD unk2;
 DWORD64 unkLock0;
 DWORD64 unkLock1;
 DWORD64 unkLock2;
 DWORD64 Prime;
 DWORD64 unkData0;
 DWORD64 unkData1;
 DWORD64 unkData2;
 DWORD64 unk3;
 DWORD64 Bcrypt_modmul;
 DWORD64 unk4;
 DWORD64 Bcrypt_modexp;
 DWORD64 unk5;
} KIWI_BCRYPT_ASYM_KEY_Bignum_81_64, *PKIWI_BCRYPT_ASYM_KEY_Bignum_81_64;

typedef struct _KIWI_BCRYPT_ASYM_KEY_81_64 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD bits0;
 DWORD unk0;
 DWORD64 unk1;
 DWORD unk2;
 DWORD bits1;
 DWORD nbModulus;
 DWORD nbExp1 ;
 DWORD nbExp2;
 DWORD Tag;
 DWORD Size;
 DWORD64 PublicExponent;
 DWORD64 _PublicExponent;
 DWORD64 Modulus;
 DWORD64 Exponent1;
 DWORD64 Exponent2;
 DWORD64 Coefficient;
 DWORD64 unk3;
 KIWI_BCRYPT_ASYM_KEY_Bignum_81_64 bnPrime1;
 KIWI_BCRYPT_ASYM_KEY_Bignum_81_64 bnPrime2;
} KIWI_BCRYPT_ASYM_KEY_81_64, *PKIWI_BCRYPT_ASYM_KEY_81_64;

typedef struct _KIWI_BCRYPT_ASYM_KEY_Bignum_6_64 {
 DWORD64 nbBlock;
 DWORD64 unk0;
 DWORD64 unk1;
 DWORD bits;
 DWORD unk2;
 DWORD64 unkLock0;
 DWORD64 unkLock1;
 DWORD64 unkLock2;
 DWORD64 Prime;
 DWORD64 unkData0;
 DWORD64 unkData1;
 DWORD64 unkData2;
 DWORD64 unk3;
 DWORD64 Bcrypt_modmul;
 DWORD64 unk4;

} KIWI_BCRYPT_ASYM_KEY_Bignum_6_64, *PKIWI_BCRYPT_ASYM_KEY_Bignum_6_64;

typedef struct _KIWI_BCRYPT_ASYM_KEY_6_64 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD bits0;
 DWORD unk0;
 DWORD64 unk1;
 DWORD unk2;
 DWORD bits1;
 DWORD nbModulus;
 DWORD nbExp1 ;
 DWORD nbExp2;
 DWORD Tag;
 DWORD Size;
 DWORD64 PublicExponent;
 DWORD64 _PublicExponent;
 DWORD64 Modulus;
 DWORD64 Exponent1;
 DWORD64 Exponent2;
 DWORD64 Coefficient;
 DWORD64 unk3;
 KIWI_BCRYPT_ASYM_KEY_Bignum_6_64 bnPrime1;
 KIWI_BCRYPT_ASYM_KEY_Bignum_6_64 bnPrime2;
} KIWI_BCRYPT_ASYM_KEY_6_64, *PKIWI_BCRYPT_ASYM_KEY_6_64;

typedef struct _KIWI_BCRYPT_SYM_KEY_81_64 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD dwMode;
 DWORD dwBlockLen;
 DWORD unk0;
 DWORD dwEffectiveKeyLen;
 DWORD unk1;
 DWORD64 unk2;
 BYTE IV[16];
 DWORD dwData;
 BYTE Data[32];

} KIWI_BCRYPT_SYM_KEY_81_64, *PKIWI_BCRYPT_SYM_KEY_81_64;

typedef struct _KIWI_BCRYPT_SYM_KEY_80_64 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD dwMode;
 DWORD dwBlockLen;
 DWORD unk0;
 DWORD dwEffectiveKeyLen;
 DWORD64 unk1;
 DWORD dwData;
 BYTE Data[64];
 BYTE IV[16];

} KIWI_BCRYPT_SYM_KEY_80_64, *PKIWI_BCRYPT_SYM_KEY_80_64;

typedef struct _KIWI_BCRYPT_SYM_KEY_6_64 {
 KIWI_BCRYPT_GENERIC_KEY_HEADER Header;
 DWORD dwMode;
 DWORD dwBlockLen;
 DWORD dwEffectiveKeyLen;
 DWORD dwData;
 BYTE Data[64];

 BYTE IV[ANYSIZE_ARRAY ];
} KIWI_BCRYPT_SYM_KEY_6_64, *PKIWI_BCRYPT_SYM_KEY_6_64;

typedef struct _KIWI_BCRYPT_HANDLE_KEY64 {
 DWORD size;
 DWORD tag;
 DWORD64 hAlgorithm;
 DWORD64 key;
 DWORD64 unk0;
} KIWI_BCRYPT_HANDLE_KEY64, *PKIWI_BCRYPT_HANDLE_KEY64;
#endif

#define RSAENH_KEY_32 0xe35a172c
#define DSSENH_KEY_32 0xa2491d83

#if defined(_M_X64) || defined(_M_ARM64)
#define RSAENH_KEY_64 0xe35a172cd96214a0
#define DSSENH_KEY_64 0xa2491d83d96214a0
#endif

typedef struct _KIWI_CRYPT_SEARCH {
 PKULL_M_MEMORY_HANDLE hMemory;
 WORD Machine;
 KIWI_CRYPTKEY32 ProcessKiwiCryptKey32;
#if defined(_M_X64) || defined(_M_ARM64)
 KIWI_CRYPTKEY64 ProcessKiwiCryptKey64;
#endif
 BOOL bAllProcessKiwiCryptKey;
 DWORD myPid;
 DWORD prevPid;
 DWORD currPid;
 PCUNICODE_STRING processName;
} KIWI_CRYPT_SEARCH, *PKIWI_CRYPT_SEARCH;
