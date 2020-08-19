/*
 * @Author: PureDeep
 * @Date: 2020-08-18 18:11:17
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-18 18:21:34
 * @FilePath: \C++\ExerciseC++\09Ë®ÏÉ»¨Êý.cpp
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 100; i < 1000; i++)
    {
        int a = i / 100;
        //cout << a << endl;
        int b = i / 10 % 10;
        //cout << b << endl;
        int c = i % 10;
        //cout << c << endl;
        if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}