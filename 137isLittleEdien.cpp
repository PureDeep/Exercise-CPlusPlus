/*
 * @Author: PureDeep
 * @Date: 2020-11-13 20:27:28
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-14 19:38:08
 * @FilePath: \Exercise-CPlusPlus\137isLittleEdien.cpp
 */
/*
 * is-little-endian.c
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <stdio.h>
#include <assert.h>

using namespace std;

// typedef unsigned char *byte_pointer;

int is_little_endian()
{
    int test_num = 0xff;
    unsigned char *byte_start = (unsigned char *)&test_num;

    if (byte_start[0] == 0xff)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int res = is_little_endian();
    cout << res << endl;
    return 0;
}