#include "utility.h"
#include <stddef.h>

ushort_t crc16(const uchar_t *message, const size_t message_len,
               char *upper_bit, char *lower_bit) {
  ushort_t x = 0xFFFF; // 1. 2byte分の全ビットがONのデータを用意
  int i, j;

  for (i = 0; i < message_len; i++) {
    x = x ^ message[i]; // 2. 1バイト分のパケットとの排他的論理和

    for (j = 0; j < 8; j++) {
      if ((x & 0x0001) == 0x0001) {
        x >>= 1;
        x ^= 0xA001;
      } else {
        x >>= 1;
      }
    }
  }

  *lower_bit = (char)(x >> 8);
  *upper_bit = (char)(x & 0x00FF);

  return x;
}
