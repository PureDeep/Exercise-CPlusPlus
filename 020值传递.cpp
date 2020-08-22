/*
 * @Author: PureDeep
 * @Date: 2020-08-22 15:55:26
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-22 15:56:30
 * @FilePath: \C++\ExerciseC++\020Öµ´«µÝ.cpp
 */
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    a = 50;
    return a + b;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = sum(a, b);
    cout << c << endl;
    cout << a << endl;
    return 0;
}