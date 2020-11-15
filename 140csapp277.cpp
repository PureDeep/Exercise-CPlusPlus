/*
 * @Author: PureDeep
 * @Date: 2020-11-14 16:19:37
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-14 16:32:46
 * @FilePath: \Exercise-CPlusPlus\140csapp277.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <stdio.h>

using namespace std;

int A(int x)
{
    return (x << 4) + x;
}

int B(int x)
{
    return x - (x << 3);
}

int C(int x)
{
    return (x << 6) - (x << 2);
}

int D(int x)
{
    return (x << 4) - (x << 7);
}

int main()
{
    int x = 1;
    cout << A(x) << endl;
    cout << B(x) << endl;
    cout << C(x) << endl;
    cout << D(x) << endl;
    return 0;
}