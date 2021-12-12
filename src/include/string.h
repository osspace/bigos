/*
 * @Author: Dizzrt
 * @Date: 2021-11-06 17:21:31
 * @LastEditTime: 2021-12-12 15:02:35
 * @LastEditors: Please set LastEditors
 * @FilePath: \bigos\src\include\string.h
 * @Description:
 */

#ifndef __BIG_STRING_H__
#define __BIG_STRING_H__

#include "stdint.h"

#define OPSIZE 8 // align 8 byte
#define byte unsigned char
#define size_t unsigned long long

extern "C" {
void *memset(void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);

const char *strcpy(char *, const char *);
int strcmp(const char *, const char *);
size_t strlen(const char *);
// char * strchr(const char *_Str, int _Val);
// char * strrchr(const char *_Str, int _Ch);
// char * strcat(char *, const char *);

char *itoa(int64_t, char *, uint8_t);
}
#endif