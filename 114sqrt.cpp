/*
 * @Author: PureDeep
 * @Date: 2020-10-23 21:42:59
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-23 21:46:22
 * @FilePath: \Exercise-CPlusPlus\114sqrt.cpp
 */
#include <iostream>
#include <climits>

using namespace std;

int sqrt(int n)
{
    int i = 1;
    while (i * i < n)
    {
        i++;
    }
    return i;
}

int main()
{
    cout << sqrt(2100000000) << endl;
    cout << INT_MAX << endl;
    return 0;
}