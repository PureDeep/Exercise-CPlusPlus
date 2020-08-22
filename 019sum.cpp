/*
 * @Author: PureDeep
 * @Date: 2020-08-22 15:38:49
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-22 15:48:37
 * @FilePath: \C++\ExerciseC++\019sum.cpp
 */
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = sum(a, b);
    cout << c << endl;
    return 0;
}