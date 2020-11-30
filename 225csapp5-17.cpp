/*
 * @Author: PureDeep
 * @Date: 2020-11-30 15:23:52
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-30 15:31:15
 * @FilePath: \Exercise-CPlusPlus\225csapp5-17.cpp
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
using namespace std;

/*Basic implementation of memset() */
void *basic_memset(void *s, int c, size_t n)
{
    size_t cnt = 0;
    unsigned char *schar = s;
    while (cnt < n)
    {
        *schar++ = (unsigned char)c;
        cnt++;
    }
    return s;
}

void *ans_memset(void *s, unsigned long c, size_t n)
{
    size_t K = sizeof(unsigned long);
    size_t cnt = 0;
    unsigned char *schar = s;
    while (cnt < n)
    {
        if ((size_t)schar % K == 0)
        {
            break;
        }
        *schar++ = (unsigned char)c;
        cnt++;
    }
}

int main(int argc, char *argv[])
{

    return 0;
}