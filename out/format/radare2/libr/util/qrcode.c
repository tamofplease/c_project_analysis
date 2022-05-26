# 1 "project/radare2/libr/util/qrcode.c"
# 25 "project/radare2/libr/util/qrcode.c"
#include <r_util.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "r_qrcode.h"
# 50 "project/radare2/libr/util/qrcode.c"
static int getTextProperties(const char *text, bool *isNumeric, bool *isAlphanumeric, int *textBits);
static int fitVersionToData(int minVersion, int maxVersion, enum qrcodegen_Ecc ecl,
       int dataLen, int dataBitLen, int ver1To9LenBits, int ver10To26LenBits, int ver27To40LenBits);
static void encodeQrCodeTail(ut8 dataAndQrcode[], int bitLen, ut8 tempBuffer[],
        int version, enum qrcodegen_Ecc ecl, enum qrcodegen_Mask mask, bool boostEcl);
static void appendBitsToBuffer(unsigned int val, int numBits, ut8 buffer[], int *bitLen);

static void appendErrorCorrection(ut8 data[], int version, enum qrcodegen_Ecc ecl, ut8 result[]);
static int getNumDataCodewords(int version, enum qrcodegen_Ecc ecl);
static int getNumRawDataModules(int version);

static void calcReedSolomonGenerator(int degree, ut8 result[]);
static void calcReedSolomonRemainder(const ut8 data[], int dataLen, const ut8 generator[], int degree, ut8 result[]);
static ut8 finiteFieldMultiply(ut8 x, ut8 y);

static void initializeFunctionModules(int version, ut8 qrcode[]);
static void drawWhiteFunctionModules(ut8 qrcode[], int version);
static void drawFormatBits(enum qrcodegen_Ecc ecl, enum qrcodegen_Mask mask, ut8 qrcode[]);
static int getAlignmentPatternPositions(int version, ut8 result[7]);
static void fillRectangle(int left, int top, int width, int height, ut8 qrcode[]);

static bool drawCodewords(const ut8 data[], int dataLen, ut8 qrcode[]);
static bool applyMask(const ut8 functionModules[], ut8 qrcode[], enum qrcodegen_Mask mask);
static long getPenaltyScore(const ut8 qrcode[]);

static bool getModule(const ut8 qrcode[], int x, int y);
static bool setModule(ut8 qrcode[], int x, int y, bool isBlack);
static void setModuleBounded(ut8 qrcode[], int x, int y, bool isBlack);
# 86 "project/radare2/libr/util/qrcode.c"
static int qrcodegen_getSize(const uint8_t qrcode[]);







static bool qrcodegen_getModule(const uint8_t qrcode[], int x, int y);





static const char *ALPHANUMERIC_CHARSET = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ $%*+-./:";


static const int8_t ECC_CODEWORDS_PER_BLOCK[4][41] = {


 { -1, 7, 10, 15, 20, 26, 18, 20, 24, 30, 18, 20, 24, 26, 30, 22, 24, 28, 30, 28, 28, 28, 28, 30, 30, 26, 28, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 },
 { -1, 10, 16, 26, 18, 24, 16, 18, 22, 22, 26, 30, 22, 22, 24, 24, 28, 28, 26, 26, 26, 26, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28 },
 { -1, 13, 22, 18, 26, 18, 24, 18, 22, 20, 24, 28, 26, 24, 20, 30, 24, 28, 28, 26, 30, 28, 30, 30, 30, 30, 28, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 },
 { -1, 17, 28, 22, 16, 22, 28, 26, 26, 24, 28, 24, 28, 22, 24, 24, 30, 28, 28, 26, 28, 30, 24, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 },
};


static const int8_t NUM_ERROR_CORRECTION_BLOCKS[4][41] = {


 { -1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 4, 4, 4, 4, 4, 6, 6, 6, 6, 7, 8, 8, 9, 9, 10, 12, 12, 12, 13, 14, 15, 16, 17, 18, 19, 19, 20, 21, 22, 24, 25 },
 { -1, 1, 1, 1, 2, 2, 4, 4, 4, 5, 5, 5, 8, 9, 9, 10, 10, 11, 13, 14, 16, 17, 17, 18, 20, 21, 23, 25, 26, 28, 29, 31, 33, 35, 37, 38, 40, 43, 45, 47, 49 },
 { -1, 1, 1, 2, 2, 4, 4, 6, 6, 8, 8, 8, 10, 12, 16, 12, 17, 16, 18, 21, 20, 23, 23, 25, 27, 29, 34, 34, 35, 38, 40, 43, 45, 48, 51, 53, 56, 59, 62, 65, 68 },
 { -1, 1, 1, 2, 4, 4, 4, 5, 6, 8, 8, 11, 11, 16, 16, 18, 16, 19, 21, 25, 25, 25, 34, 30, 32, 35, 37, 40, 42, 45, 48, 51, 54, 57, 60, 63, 66, 70, 74, 77, 81 },
};


static const int PENALTY_N1 = 3;
static const int PENALTY_N2 = 3;
static const int PENALTY_N3 = 40;
static const int PENALTY_N4 = 10;





R_API bool r_qrcode_text(const char *text, ut8 tempBuffer[], ut8 qrcode[], enum qrcodegen_Ecc ecl, int minVersion, int maxVersion, enum qrcodegen_Mask mask, bool boostEcl) {
 if (!text || !tempBuffer || !qrcode) {
  return false;
 }
 if (minVersion < qrcodegen_VERSION_MIN || minVersion > qrcodegen_VERSION_MAX) {
  return false;
 }
 if (maxVersion < qrcodegen_VERSION_MIN || maxVersion > qrcodegen_VERSION_MAX) {
  return false;
 }
 if (ecl < qrcodegen_Ecc_LOW || ecl > qrcodegen_Ecc_HIGH) {
  return false;
 }
 if (mask < -1 || mask > 7) {
  return false;
 }


 qrcode[0] = 0;


 bool isNumeric, isAlphanumeric;
 int textBits;
 int textLen = getTextProperties (text, &isNumeric, &isAlphanumeric, &textBits);
 if (textLen < 0) {
  return false;
 }

 if (!isAlphanumeric) {
  if (textLen > qrcodegen_BUFFER_LEN_FOR_VERSION (maxVersion)) {
   return false;
  }
  int i;
  for (i = 0; i < textLen; i++) {
   tempBuffer[i] = (ut8) text[i];
  }
  return r_qrcode_bin (tempBuffer, (size_t) textLen, qrcode, ecl, minVersion, maxVersion, mask, boostEcl);
 }

 int version = fitVersionToData (minVersion, maxVersion, ecl, textLen, (int) textBits,
  (isNumeric? 10: 9), (isNumeric? 12: 11), (isNumeric? 14: 13));
 if (version == 0) {
  return false;
 }
 memset (qrcode, 0, qrcodegen_BUFFER_LEN_FOR_VERSION (version) * sizeof(qrcode[0]));
 int bitLen = 0;


 if (isNumeric && textLen > 0) {
  appendBitsToBuffer (1, 4, qrcode, &bitLen);
  int lengthBits = version <= 9? 10: (version <= 26? 12: 14);
  appendBitsToBuffer ((unsigned int) textLen, lengthBits, qrcode, &bitLen);
  int accumData = 0;
  int accumCount = 0;
  const char *p;
  for (p = text; *p != '\0'; p++) {
   accumData = accumData * 10 + (*p - '0');
   accumCount++;
   if (accumCount == 3) {
    appendBitsToBuffer (accumData, 10, qrcode, &bitLen);
    accumData = 0;
    accumCount = 0;
   }
  }
  if (accumCount > 0) {
   appendBitsToBuffer (accumData, accumCount * 3 + 1, qrcode, &bitLen);
  }

 } else if (isAlphanumeric && textLen > 0) {
  appendBitsToBuffer (2, 4, qrcode, &bitLen);
  int lengthBits = version <= 9? 9: (version <= 26? 11: 13);
  appendBitsToBuffer ((unsigned int) textLen, lengthBits, qrcode, &bitLen);
  int accumData = 0;
  int accumCount = 0;
  const char *p;
  for (p = text; *p != '\0'; p++) {
   accumData = accumData * 45 + (strchr (ALPHANUMERIC_CHARSET, *p) - ALPHANUMERIC_CHARSET);
   accumCount++;
   if (accumCount == 2) {
    appendBitsToBuffer (accumData, 11, qrcode, &bitLen);
    accumData = 0;
    accumCount = 0;
   }
  }
  if (accumCount > 0) {
   appendBitsToBuffer (accumData, 6, qrcode, &bitLen);
  }
 }


 encodeQrCodeTail (qrcode, bitLen, tempBuffer, version, ecl, mask, boostEcl);
 return true;
}



R_API bool r_qrcode_bin(ut8 *dataAndTemp, int dataLen, ut8 *qrcode,
   enum qrcodegen_Ecc ecl, int minVersion, int maxVersion, enum qrcodegen_Mask mask, bool boostEcl) {
 if (!dataAndTemp || !qrcode || dataLen < 1) {
  return false;
 }
 if (minVersion < qrcodegen_VERSION_MIN || minVersion > qrcodegen_VERSION_MAX) {
  return false;
 }
 if (maxVersion < qrcodegen_VERSION_MIN || maxVersion > qrcodegen_VERSION_MAX) {
  return false;
 }
 if (ecl < qrcodegen_Ecc_LOW || ecl > qrcodegen_Ecc_HIGH) {
  return false;
 }
 if (mask < -1 || mask > 7) {
  return false;
 }


 qrcode[0] = 0;


 if (dataLen > INT16_MAX / 8) {
  return false;
 }

 int version = fitVersionToData (minVersion, maxVersion, ecl, (int) dataLen, (int) dataLen * 8, 8, 16, 16);
 if (version == 0) {
  return false;
 }


 memset (qrcode, 0, qrcodegen_BUFFER_LEN_FOR_VERSION (version) * sizeof(qrcode[0]));
 int bitLen = 0;
 appendBitsToBuffer (4, 4, qrcode, &bitLen);
 appendBitsToBuffer ((unsigned int) dataLen, (version <= 9? 8: 16), qrcode, &bitLen);
 size_t i;
 for (i = 0; i < dataLen; i++) {
  appendBitsToBuffer (dataAndTemp[i], 8, qrcode, &bitLen);
 }
 encodeQrCodeTail (qrcode, bitLen, dataAndTemp, version, ecl, mask, boostEcl);
 return true;
}






static int getTextProperties(const char *text, bool *isNumeric, bool *isAlphanumeric, int *textBits) {
 int textLen = 0;
 *isNumeric = true;
 *isAlphanumeric = true;
 const char *p;
 for (p = text; *p != '\0'; p++, textLen++) {
  if (textLen >= INT16_MAX) {
   return -1;
  }
  char c = *p;
  if (c < '0' || c > '9') {
   *isNumeric = false;
   *isAlphanumeric &= strchr (ALPHANUMERIC_CHARSET, c) != NULL;
  }
 }

 long tempBits;
 if (*isNumeric) {
  tempBits = textLen * 3L + (textLen + 2L) / 3;
 } else if (*isAlphanumeric) {
  tempBits = textLen * 5L + (textLen + 1L) / 2;
 } else {
  tempBits = textLen * 8L;
 }

 if (tempBits > INT_MAX) {
  return -1;
 }
 *textBits = (int) tempBits;
 return textLen;
}



static int fitVersionToData(int minVersion, int maxVersion, enum qrcodegen_Ecc ecl,
       int dataLen, int dataBitLen, int ver1To9LenBits, int ver10To26LenBits, int ver27To40LenBits) {

 if (qrcodegen_VERSION_MIN <= minVersion && minVersion <= maxVersion && maxVersion <= qrcodegen_VERSION_MAX) {
  if ((int) ecl < 0 || (int) ecl > 3) {
   return 0;
  }
  if (dataLen < 0 || dataBitLen < 0) {
   return 0;
  }
  if (ver1To9LenBits < 1 || ver1To9LenBits > 16) {

   return 0;
  }
  if (ver10To26LenBits < 1 || ver10To26LenBits > 16) {
   return 0;
  }
  if (ver27To40LenBits < 1 || ver27To40LenBits > 16) {
   return 0;
  }
  int version;
  for (version = minVersion;; version++) {
   int lengthBits;
   if (version <= 9) {
    lengthBits = ver1To9LenBits;
   } else if (version <= 26) {
    lengthBits = ver10To26LenBits;
   } else {
    lengthBits = ver27To40LenBits;
   }
   if (dataLen < (1L << lengthBits)) {
    int dataCapacityBits = getNumDataCodewords (version, ecl) * 8;
    int header = 4 + lengthBits;
    if (dataBitLen <= INT_MAX - header && header + dataBitLen <= dataCapacityBits) {
     return version;
    }
   }
   if (version >= maxVersion) {
    break;
   }
  }
 }
 return 0;
}







static void encodeQrCodeTail(ut8 dataAndQrcode[], int bitLen, ut8 tempBuffer[], int version, enum qrcodegen_Ecc ecl, enum qrcodegen_Mask mask, bool boostEcl) {

 if (boostEcl) {
  if (bitLen <= getNumDataCodewords (version, qrcodegen_Ecc_MEDIUM ) * 8) {
   ecl = qrcodegen_Ecc_MEDIUM;
  }
  if (bitLen <= getNumDataCodewords (version, qrcodegen_Ecc_QUARTILE) * 8) {
   ecl = qrcodegen_Ecc_QUARTILE;
  }
  if (bitLen <= getNumDataCodewords (version, qrcodegen_Ecc_HIGH ) * 8) {
   ecl = qrcodegen_Ecc_HIGH;
  }
 }
 int dataCapacityBits = getNumDataCodewords (version, ecl) * 8;


 int terminatorBits = dataCapacityBits - bitLen;
 if (terminatorBits > 4) {
  terminatorBits = 4;
 }
 appendBitsToBuffer (0, terminatorBits, dataAndQrcode, &bitLen);
 appendBitsToBuffer (0, (8 - bitLen % 8) % 8, dataAndQrcode, &bitLen);
 ut8 padByte;
 for (padByte = 0xEC; bitLen < dataCapacityBits; padByte ^= 0xEC ^ 0x11) {
  appendBitsToBuffer (padByte, 8, dataAndQrcode, &bitLen);
 }
 if (bitLen % 8) {
  return;
 }


 appendErrorCorrection (dataAndQrcode, version, ecl, tempBuffer);
 initializeFunctionModules (version, dataAndQrcode);
 if (!drawCodewords (tempBuffer, getNumRawDataModules (version) / 8, dataAndQrcode)) {
  return;
 }
 drawWhiteFunctionModules (dataAndQrcode, version);
 initializeFunctionModules (version, tempBuffer);


 if (mask == qrcodegen_Mask_AUTO) {
  long minPenalty = LONG_MAX;
  int i;
  for (i = 0; i < 8; i++) {
   drawFormatBits (ecl, (enum qrcodegen_Mask) i, dataAndQrcode);
   applyMask (tempBuffer, dataAndQrcode, (enum qrcodegen_Mask) i);
   long penalty = getPenaltyScore (dataAndQrcode);
   if (penalty < minPenalty) {
    mask = (enum qrcodegen_Mask) i;
    minPenalty = penalty;
   }
   applyMask (tempBuffer, dataAndQrcode, (enum qrcodegen_Mask) i);
  }
 }
 if (mask < 0 || mask > 7) {
  return;
 }
 drawFormatBits (ecl, mask, dataAndQrcode);
 applyMask (tempBuffer, dataAndQrcode, mask);
}



static void appendBitsToBuffer(unsigned int val, int numBits, ut8 buffer[], int *bitLen) {
 if (numBits < 0 || numBits > 16 || ((unsigned long) val >> numBits) != 0) {
  return;
 }
 int i;
 for (i = numBits - 1; i >= 0; i--, (*bitLen)++) {
  buffer[*bitLen >> 3] |= ((val >> i) & 1) << (7 - (*bitLen & 7));
 }
}
# 443 "project/radare2/libr/util/qrcode.c"
static void appendErrorCorrection(ut8 data[], int version, enum qrcodegen_Ecc ecl, ut8 result[]) {

 if ((int) ecl < qrcodegen_Ecc_LOW || (int) ecl > qrcodegen_Ecc_HIGH || version < qrcodegen_VERSION_MIN || version > qrcodegen_VERSION_MAX) {
  return;
 }
 int numBlocks = NUM_ERROR_CORRECTION_BLOCKS[(int) ecl][version];
 int blockEccLen = ECC_CODEWORDS_PER_BLOCK[(int) ecl][version];
 int rawCodewords = getNumRawDataModules (version) / 8;
 int dataLen = rawCodewords - blockEccLen * numBlocks;
 int numShortBlocks = numBlocks - rawCodewords % numBlocks;
 int shortBlockDataLen = rawCodewords / numBlocks - blockEccLen;


 ut8 generator[30];
 calcReedSolomonGenerator (blockEccLen, generator);
 int i, j, k, l;
 for (i = 0, j = dataLen, k = 0; i < numBlocks; i++) {
  int blockLen = shortBlockDataLen;
  if (i >= numShortBlocks) {
   blockLen++;
  }
  calcReedSolomonRemainder (&data[k], blockLen, generator, blockEccLen, &data[j]);
  j += blockEccLen;
  k += blockLen;
 }


 for (i = 0, k = 0; i < numBlocks; i++) {
  for (j = 0, l = i; j < shortBlockDataLen; j++, k++, l += numBlocks) {
   result[l] = data[k];
  }
  if (i >= numShortBlocks) {
   k++;
  }
 }
 for (i = numShortBlocks, k = (numShortBlocks + 1) * shortBlockDataLen, l = numBlocks * shortBlockDataLen;
      i < numBlocks; i++, k += shortBlockDataLen + 1, l++) {
  result[l] = data[k];
 }
 for (i = 0, k = dataLen; i < numBlocks; i++) {
  for (j = 0, l = dataLen + i; j < blockEccLen; j++, k++, l += numBlocks) {
   result[l] = data[k];
  }
 }
}




static int getNumDataCodewords(int version, enum qrcodegen_Ecc ecl) {
 int v = version, e = (int) ecl;

 return getNumRawDataModules (v) / 8 - ECC_CODEWORDS_PER_BLOCK[e][v] * NUM_ERROR_CORRECTION_BLOCKS[e][v];
}





static int getNumRawDataModules(int version) {
 if (version < qrcodegen_VERSION_MIN || version > qrcodegen_VERSION_MAX) {
  return 0;
 }
 int result = (16 * version + 128) * version + 64;
 if (version >= 2) {
  int numAlign = version / 7 + 2;
  result -= (25 * numAlign - 10) * numAlign - 55;
  if (version >= 7) {
   result -= 18 * 2;
  }
 }
 return result;
}




static void calcReedSolomonGenerator(int degree, ut8 result[]) {

 if (degree < 1 || degree > 31) {
  return;
 }
 memset (result, 0, degree * sizeof(result[0]));
 result[degree - 1] = 1;




 int i, j;
 ut8 root = 1;
 for (i = 0; i < degree; i++) {

  for (j = 0; j < degree; j++) {
   result[j] = finiteFieldMultiply (result[j], root);
   if (j + 1 < degree) {
    result[j] ^= result[j + 1];
   }
  }
  root = finiteFieldMultiply (root, 0x02);
 }
}




static void calcReedSolomonRemainder(const ut8 data[], int dataLen, const ut8 generator[], int degree, ut8 result[]) {

 if (degree < 1 || degree > 31) {
  return;
 }
 memset (result, 0, degree * sizeof(result[0]));
 int i, j;
 for (i = 0; i < dataLen; i++) {
  ut8 factor = data[i] ^ result[0];
  memmove (&result[0], &result[1], (degree - 1) * sizeof(result[0]));
  result[degree - 1] = 0;
  for (j = 0; j < degree; j++) {
   result[j] ^= finiteFieldMultiply (generator[j], factor);
  }
 }
}




static ut8 finiteFieldMultiply(ut8 x, ut8 y) {

 ut8 z = 0;
 int i;
 for (i = 7; i >= 0; i--) {
  z = (z << 1) ^ ((z >> 7) * 0x11D);
  z ^= ((y >> i) & 1) * x;
 }
 return z;
}





static void initializeFunctionModules(int version, ut8 qrcode[]) {

 int qrsize = version * 4 + 17;
 memset (qrcode, 0, ((qrsize * qrsize + 7) / 8 + 1) * sizeof(qrcode[0]));
 qrcode[0] = (ut8) qrsize;


 fillRectangle (6, 0, 1, qrsize, qrcode);
 fillRectangle (0, 6, qrsize, 1, qrcode);


 fillRectangle (0, 0, 9, 9, qrcode);
 fillRectangle (qrsize - 8, 0, 8, 9, qrcode);
 fillRectangle (0, qrsize - 8, 9, 8, qrcode);


 ut8 alignPatPos[7] = {
  0
 };
 int i, j, numAlign = getAlignmentPatternPositions (version, alignPatPos);
 for (i = 0; i < numAlign; i++) {
  for (j = 0; j < numAlign; j++) {
   if ((i == 0 && j == 0) || (i == 0 && j == numAlign - 1) || (i == numAlign - 1 && j == 0)) {
    continue;
   }
   fillRectangle (alignPatPos[i] - 2, alignPatPos[j] - 2, 5, 5, qrcode);
  }
 }


 if (version >= 7) {
  fillRectangle (qrsize - 11, 0, 3, 6, qrcode);
  fillRectangle (0, qrsize - 11, 6, 3, qrcode);
 }
}





static void drawWhiteFunctionModules(ut8 qrcode[], int version) {

 int i, j, k, l, qrsize = qrcodegen_getSize (qrcode);
 for (i = 7; i < qrsize - 7; i += 2) {
  setModule (qrcode, 6, i, false);
  setModule (qrcode, i, 6, false);
 }


 for (i = -4; i <= 4; i++) {
  for (j = -4; j <= 4; j++) {
   int dist = abs (i);
   if (abs (j) > dist) {
    dist = abs (j);
   }
   if (dist == 2 || dist == 4) {
    setModuleBounded (qrcode, 3 + j, 3 + i, false);
    setModuleBounded (qrcode, qrsize - 4 + j, 3 + i, false);
    setModuleBounded (qrcode, 3 + j, qrsize - 4 + i, false);
   }
  }
 }


 ut8 alignPatPos[7] = {
  0
 };
 int numAlign = getAlignmentPatternPositions (version, alignPatPos);
 for (i = 0; i < numAlign; i++) {
  for (j = 0; j < numAlign; j++) {
   if ((i == 0 && j == 0) || (i == 0 && j == numAlign - 1) || (i == numAlign - 1 && j == 0)) {
    continue;
   }
   for (k = -1; k <= 1; k++) {
    for (l = -1; l <= 1; l++) {
     setModule (qrcode, alignPatPos[i] + l, alignPatPos[j] + k, k == 0 && l == 0);
    }
   }
  }
 }


 if (version >= 7) {

  int i, j, rem = version;
  for (i = 0; i < 12; i++) {
   rem = (rem << 1) ^ ((rem >> 11) * 0x1F25);
  }
  ut32 data = ((ut32) version << 12) | rem;
  if (data >> 18) {
   return;
  }


  for (i = 0; i < 6; i++) {
   for (j = 0; j < 3; j++) {
    int k = qrsize - 11 + j;
    setModule (qrcode, k, i, (data & 1) != 0);
    setModule (qrcode, i, k, (data & 1) != 0);
    data >>= 1;
   }
  }
 }
}





static void drawFormatBits(enum qrcodegen_Ecc ecl, enum qrcodegen_Mask mask, ut8 qrcode[]) {

 if (mask < 0 || mask > 7) {
  return;
 }
 int data;
 switch (ecl) {
 case qrcodegen_Ecc_LOW: data = 1; break;
 case qrcodegen_Ecc_MEDIUM: data = 0; break;
 case qrcodegen_Ecc_QUARTILE: data = 3; break;
 case qrcodegen_Ecc_HIGH: data = 2; break;
 default: return;
 }
 data = data << 3 | (int) mask;
 int i, rem = data;
 for (i = 0; i < 10; i++) {
  rem = (rem << 1) ^ ((rem >> 9) * 0x537);
 }
 data = data << 10 | rem;
 data ^= 0x5412;
 if (data >> 15) {
  return;
 }


 for (i = 0; i <= 5; i++) {
  setModule (qrcode, 8, i, ((data >> i) & 1) != 0);
 }
 setModule (qrcode, 8, 7, ((data >> 6) & 1) != 0);
 setModule (qrcode, 8, 8, ((data >> 7) & 1) != 0);
 setModule (qrcode, 7, 8, ((data >> 8) & 1) != 0);
 for (i = 9; i < 15; i++) {
  setModule (qrcode, 14 - i, 8, ((data >> i) & 1) != 0);
 }


 int qrsize = qrcodegen_getSize (qrcode);
 for (i = 0; i <= 7; i++) {
  setModule (qrcode, qrsize - 1 - i, 8, ((data >> i) & 1) != 0);
 }
 for (i = 8; i < 15; i++) {
  setModule (qrcode, 8, qrsize - 15 + i, ((data >> i) & 1) != 0);
 }
 setModule (qrcode, 8, qrsize - 8, true);
}




static int getAlignmentPatternPositions(int version, ut8 result[7]) {
 if (version == 1) {
  return 0;
 }
 int qrsize = version * 4 + 17;
 int numAlign = version / 7 + 2;
 int i, step;
 if (version != 32) {
  step = (version * 4 + numAlign * 2 + 1) / (2 * numAlign - 2) * 2;
 } else {
  step = 26;
 }
 int pos;
 for (i = numAlign - 1, pos = qrsize - 7; i >= 1; i--, pos -= step) {
  result[i] = pos;
 }
 result[0] = 6;
 return numAlign;
}


static void fillRectangle(int left, int top, int width, int height, ut8 qrcode[]) {
 int dx, dy;
 for (dy = 0; dy < height; dy++) {
  for (dx = 0; dx < width; dx++) {
   setModule (qrcode, left + dx, top + dy, true);
  }
 }
}





static bool drawCodewords(const ut8 data[], int dataLen, ut8 qrcode[]) {
 int qrsize = qrcodegen_getSize (qrcode);
 int right, vert, j, i = 0;

 for (right = qrsize - 1; right >= 1; right -= 2) {
  if (right == 6) {
   right = 5;
  }
  for (vert = 0; vert < qrsize; vert++) {
   for (j = 0; j < 2; j++) {
    int x = right - j;
    bool upward = ((right + 1) & 2) == 0;
    int y = upward? qrsize - 1 - vert: vert;
    if (!getModule (qrcode, x, y) && i < dataLen * 8) {
     bool black = ((data[i >> 3] >> (7 - (i & 7))) & 1) != 0;
     setModule (qrcode, x, y, black);
     i++;
    }


   }
  }
 }
 return i == dataLen * 8;
}






static bool applyMask(const ut8 functionModules[], ut8 qrcode[], enum qrcodegen_Mask mask) {
 if (mask < 0 || mask > 7) {
  return false;
 }
 int x, y, qrsize = qrcodegen_getSize (qrcode);
 for (y = 0; y < qrsize; y++) {
  for (x = 0; x < qrsize; x++) {
   if (getModule (functionModules, x, y)) {
    continue;
   }
   bool invert;
   switch ((int) mask) {
   case 0: invert = (x + y) % 2 == 0; break;
   case 1: invert = y % 2 == 0; break;
   case 2: invert = x % 3 == 0; break;
   case 3: invert = (x + y) % 3 == 0; break;
   case 4: invert = (x / 3 + y / 2) % 2 == 0; break;
   case 5: invert = x * y % 2 + x * y % 3 == 0; break;
   case 6: invert = (x * y % 2 + x * y % 3) % 2 == 0; break;
   case 7: invert = ((x + y) % 2 + x * y % 3) % 2 == 0; break;
   default: return false;
   }
   bool val = getModule (qrcode, x, y);
   setModule (qrcode, x, y, val ^ invert);
  }
 }
 return true;
}




static long getPenaltyScore(const ut8 qrcode[]) {
 int x, y, k, qrsize = qrcodegen_getSize (qrcode);
 long result = 0;


 for (y = 0; y < qrsize; y++) {
  bool colorX;
  int runX = 0;
  for (x = 0; x < qrsize; x++) {
   if (x == 0 || getModule (qrcode, x, y) != colorX) {
    colorX = getModule (qrcode, x, y);
    runX = 1;
   } else {
    runX++;
    if (runX == 5) {
     result += PENALTY_N1;
    } else if (runX > 5) {
     result++;
    }
   }
  }
 }

 for (x = 0; x < qrsize; x++) {
  bool colorY;
  int runY = 0;
  for (y = 0; y < qrsize; y++) {
   if (y == 0 || getModule (qrcode, x, y) != colorY) {
    colorY = getModule (qrcode, x, y);
    runY = 1;
   } else {
    runY++;
    if (runY == 5) {
     result += PENALTY_N1;
    } else if (runY > 5) {
     result++;
    }
   }
  }
 }


 for (y = 0; y < qrsize - 1; y++) {
  for (x = 0; x < qrsize - 1; x++) {
   bool color = getModule (qrcode, x, y);
   if (color == getModule (qrcode, x + 1, y) &&
       color == getModule (qrcode, x, y + 1) &&
       color == getModule (qrcode, x + 1, y + 1)) {
    result += PENALTY_N2;
   }
  }
 }


 for (y = 0; y < qrsize; y++) {
  int bits = 0;
  for (x = 0; x < qrsize; x++) {
   bits = ((bits << 1) & 0x7FF) | (getModule (qrcode, x, y)? 1: 0);
   if (x >= 10 && (bits == 0x05D || bits == 0x5D0)) {
    result += PENALTY_N3;
   }
  }
 }

 for (x = 0; x < qrsize; x++) {
  int bits = 0;
  for (y = 0; y < qrsize; y++) {
   bits = ((bits << 1) & 0x7FF) | (getModule (qrcode, x, y)? 1: 0);
   if (y >= 10 && (bits == 0x05D || bits == 0x5D0)) {
    result += PENALTY_N3;
   }
  }
 }


 int black = 0;
 for (y = 0; y < qrsize; y++) {
  for (x = 0; x < qrsize; x++) {
   if (getModule (qrcode, x, y)) {
    black++;
   }
  }
 }
 int total = qrsize * qrsize;

 for (k = 0; black * 20L < (9L - k) * total || black * 20L > (11L + k) * total; k++) {
  result += PENALTY_N4;
 }
 return result;
}





static int qrcodegen_getSize(const ut8 *qrcode) {
 if (!qrcode) {
  return 0;
 }
 int result = qrcode[0];
 if ((qrcodegen_VERSION_MIN * 4 + 17) <= result && result <= (qrcodegen_VERSION_MAX * 4 + 17)) {
  return result;
 }
 return 0;
}



static bool qrcodegen_getModule(const ut8 qrcode[], int x, int y) {
 if (!qrcode) {
  return false;
 }
 int qrsize = qrcode[0];
 return (0 <= x && x < qrsize && 0 <= y && y < qrsize) && getModule (qrcode, x, y);
}



static bool getModule(const ut8 qrcode[], int x, int y) {
 int qrsize = qrcode[0];
 if (21 <= qrsize && qrsize <= 177 && 0 <= x && x < qrsize && 0 <= y && y < qrsize) {
  int index = y * qrsize + x;
  int bitIndex = index & 7;
  int byteIndex = (index >> 3) + 1;
  return ((qrcode[byteIndex] >> bitIndex) & 1) != 0;
 }
 return false;
}



static bool setModule(ut8 qrcode[], int x, int y, bool isBlack) {
 int qrsize = qrcode[0];
 if (21 <= qrsize && qrsize <= 177 && 0 <= x && x < qrsize && 0 <= y && y < qrsize) {
  int index = y * qrsize + x;
  int bitIndex = index & 7;
  int byteIndex = (index >> 3) + 1;
  if (isBlack) {
   qrcode[byteIndex] |= 1 << bitIndex;
  } else {
   qrcode[byteIndex] &= (1 << bitIndex) ^ 0xFF;
  }
  return true;
 }
 return false;
}



static void setModuleBounded(ut8 qrcode[], int x, int y, bool isBlack) {
 int qrsize = qrcode[0];
 if (0 <= x && x < qrsize && 0 <= y && y < qrsize) {
  setModule (qrcode, x, y, isBlack);
 }
}



static char qrcode_utf8_expansions[16][7] = { "  ","▀ "," ▀","▀▀",
             "▄ ","█ ","▄▀","█▀",
             " ▄","▀▄"," █","▀█",
             "▄▄","█▄","▄█","██"};

R_API char *r_qrcode_gen(const ut8 *text, int len, bool utf8, bool inverted) {
 uint8_t qrcode[qrcodegen_BUFFER_LEN_MAX] = {
  0
 };
 enum qrcodegen_Ecc errCorLvl = qrcodegen_Ecc_HIGH;
 if (len < 0) {
  return NULL;
 }

 ut8 *buf = calloc ((128 + len), 32);
 memcpy (buf, text, len);
 bool ok = r_qrcode_bin (buf, len, qrcode, errCorLvl,
  qrcodegen_VERSION_MIN, qrcodegen_VERSION_MAX,
  qrcodegen_Mask_AUTO, true);
 if (!ok) {
  free (buf);
  return NULL;
 }

 int size = qrcodegen_getSize (qrcode);
 if (size < 1) {
  free (buf);
  return NULL;
 }
 int border = 1;
 int total = (size + 1024) * 128;
 char *res = calloc (total, 32);
 if (!res) {
  free (buf);
  return NULL;
 }
 char *p = res;
 int x, y;
 if (utf8) {
  for (y = -border; y < size + border; y += 2) {
   for (x = -border; x < size + border; x += 2) {
    int bmp = qrcodegen_getModule (qrcode, x, y);
    bmp |= qrcodegen_getModule (qrcode, x + 1, y) << 1;
    bmp |= qrcodegen_getModule (qrcode, x, y + 1) << 2;
    bmp |= qrcodegen_getModule (qrcode, x + 1, y + 1) << 3;
    const char *pixel =
     qrcode_utf8_expansions[
      inverted
      ? 15 - bmp
      : bmp];
    memcpy (p, pixel, strlen (pixel));
    p += strlen (pixel);
   }
   *p++ = '\n';
  }
 } else {
  for (y = -border; y < size + border; y++) {
   for (x = -border; x < size + border; x++) {
    bool fill = qrcodegen_getModule (qrcode, x, y);
    const char *pixel = (fill ^ inverted) ? "##" : "  ";
    memcpy (p, pixel, strlen (pixel));
    p += strlen (pixel);
   }
   *p++ = '\n';
  }
 }
 if (p > res) {
  p--;
 }
 *p = 0;
 free (buf);
 return res;
}
