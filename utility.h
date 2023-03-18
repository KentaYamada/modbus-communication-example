#ifndef __UTILITY_H_
#define __UTILITY_H_
#include <stddef.h>

typedef unsigned char uchar_t;
typedef unsigned short ushort_t;

/**
 * 水平パリティチェック
 */
void lrc(const uchar_t *message, const size_t message_len, uchar_t upper_bit,
         uchar_t lower_bit);

/**
 * 巡回符号検査方式
 * @see
 * https://www.japansensor.co.jp/manage/wp-content/uploads/2015/02/TMHX_ComSpec_20131028.pdf
 * @see https://modbus.org/docs/Modbus_over_serial_line_V1_01.pdf
 */
ushort_t crc16(const uchar_t *message, const size_t message_len,
               char *upper_bit, char *lower_bit);

#endif /** __UTILITY_H_ */
