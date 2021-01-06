/*
 * @Author: PureDeep
 * @Date: 2020-11-14 16:42:07
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-14 19:36:14
 * @FilePath: \Exercise-CPlusPlus\141csapp284.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

#include <stdio.h>
#include <assert.h>

unsigned f2u(float x)
{
    return *(unsigned *)&x;
}

int float_le(float x, float y)
{
    unsigned ux = f2u(x);
    cout << ux << endl;
    unsigned uy = f2u(y);
    cout << uy << endl;

    unsigned sx = ux >> 31;
    unsigned sy = uy >> 31;

    return (ux << 1 == 0 && uy << 1 == 0) ||
           (sx && !sy) ||
           (!sx && !sy && ux <= uy) ||
           (sx && sy && ux >= uy);
}

int main(int argc, char *argv[])
{
    assert(float_le(-0, +0));
    assert(float_le(+0, -0));
    assert(float_le(0, 3));
    assert(float_le(-4, -0));
    assert(float_le(-4, 4));
    assert(float_le(0, -1));
    return 0;
}