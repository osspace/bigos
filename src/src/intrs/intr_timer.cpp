/*
 * @Author: Dizzrt
 * @Date: 2021-11-01 18:24:28
 * @LastEditTime: 2021-11-25 21:30:12
 * @LastEditors: Dizzrt
 * @FilePath: \bigos\src\src\intrs\intr_timer.cpp
 * @Description:
 */

#include "interrupt.h"
#include "io.h"
unsigned char i = '0';
void intr_timer(uint64_t ecode) {
    // intr_Set(intr_status::INTR_OFF);

    char *p = (char *)0x40000b80a2;
    *p = i++;
    *(p + 1) = 0x0c;

    if (i > '9')
        i = '0';

    // intr_Set(intr_status::INTR_ON);
    // outb(0x20, 0x20);
    // outb(0xa0, 0x20);

    return;
}