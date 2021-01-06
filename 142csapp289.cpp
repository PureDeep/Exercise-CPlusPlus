/*
 * @Author: PureDeep
 * @Date: 2020-11-14 19:43:07
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-14 20:04:15
 * @FilePath: \Exercise-CPlusPlus\142csapp289.cpp
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int x = rand();
    int y = rand();
    int z = rand();
    cout << x << " " << y << " " << z << endl;

    double dx = (double)x;
    double dy = (double)y;
    double dz = (double)z;
    cout << dx << " " << dy << " " << dz << endl;

    assert((float)x == (float)dx);
    cout << (float)x << " " << (float)dx << endl;
    assert(dx - dy == (double)(x - y));
    cout << dx - dy << " " << (double)(x - y) << endl;
    assert((dx + dy) + dz == dx + (dy + dz));
    cout << (dx + dy) + dz << " " << dx + (dy + dz) << endl;
    assert((dx * dy) * dz == dx * (dy * dz));
    cout << (dx * dy) * dz << " " << dx * (dy * dz) << endl;
    assert(dx / dx == dx / dz);
    cout << dx / dx << " " << dx / dz << endl;

    double tx = 2.2;
    double tz = 0.0;
    assert(tx / tx == tz / tz);

    return 0;
}