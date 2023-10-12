/*
 * Copyright (C) 2019 Intel Corporation.  All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define MODULE_ID   "sum.wasm"

int
sum(int start, int length)
{
    int sum = 0, i;

    for (i = start; i < start + length; i++) {
        sum += i;
    }

    return sum;
}

int loop(unsigned char* in_buffer, uint32_t in_buffer_len,
            char* out_buffer, uint32_t out_buffer_len)
{
    printf("\n[%s]: enter loop()\n", MODULE_ID);

    printf("\n[%s]: Hello, World 1!\n", MODULE_ID);
    printf("\n[%s]: in_buffer_len = %d\n", MODULE_ID, in_buffer_len);
    printf("\n[%s]: out_buffer_len = %d\n", MODULE_ID, out_buffer_len);
    printf("\n[%s]: in_buffer = %p\n", MODULE_ID, in_buffer);
    printf("\n[%s]: out_buffer = %p\n", MODULE_ID, out_buffer);

    printf("\n[%s]: in_buffer = %s\n", MODULE_ID, in_buffer);
    printf("\n[%s]: in_buffer[0] = %d\n", MODULE_ID, in_buffer[0]);
    printf("\n[%s]: in_buffer[1] = %d\n", MODULE_ID, in_buffer[1]);
    printf("\n[%s]: in_buffer[2] = %d\n", MODULE_ID, in_buffer[2]);
    printf("\n[%s]: in_buffer[3] = %d\n", MODULE_ID, in_buffer[3]);
    // fflush(stdout);
    strcpy(out_buffer, "Hello, World 1!");
    return 0;
}
