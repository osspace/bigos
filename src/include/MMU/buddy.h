/*
 * @Author: Dizzrt
 * @LastEditTime: 2021-12-13 18:07:24
 */

#ifndef __BIG_BUDDY_H__
#define __BIG_BUDDY_H__

#include "io.h"
#include "list.h"
#include "stdint.h"

struct Block {
    uint64_t addr;
};

extern list<Block *> blist[11];

// void *__alloc_pages(uint16_t);
// void pbuddy();

#endif