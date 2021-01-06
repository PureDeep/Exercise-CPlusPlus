/*
 * @Author: PureDeep
 * @Date: 2020-11-16 20:33:47
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-16 20:40:00
 * @FilePath: \Exercise-CPlusPlus\152templateMax.cpp
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

template <class T>
T Max(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    cout << Max(1, 2) << endl;
    cout << Max(1.2, 1.3) << endl;
    return 0;
}