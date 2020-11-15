/*
 * @Author: PureDeep
 * @Date: 2020-11-14 15:22:47
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-14 15:52:59
 * @FilePath: \Exercise-CPlusPlus\138csapp261.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <stdio.h>
#include <assert.h>

using namespace std;

int A(int x)
{
    return !~x;
}

int B(int x)
{
    return !x;
}

int C(int x)
{
    return A(x | ~0xff);
}

int D(int x)
{
    return B((x >> ((sizeof(int) - 1) << 3)) & 0xff);
}

int main()
{
    int all_bit_one = ~0;
    cout << hex << all_bit_one << endl;
    int all_bit_zero = 0;
    cout << hex << all_bit_zero << endl;

    assert(A(all_bit_one));
    assert(!B(all_bit_one));
    assert(C(all_bit_one));
    assert(!D(all_bit_one));

    assert(!A(all_bit_zero));
    assert(B(all_bit_zero));
    assert(!C(all_bit_zero));
    assert(D(all_bit_zero));

    // test magic number 0x1234ff
    assert(!A(0x1234ff));
    assert(!B(0x1234ff));
    assert(C(0x1234ff));
    assert(D(0x1234ff));

    // test magic number 0x1234
    assert(!A(0x1234));
    assert(!B(0x1234));
    assert(!C(0x1234));
    assert(D(0x1234));

    return 0;
}