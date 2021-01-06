/*
 * @Author: PureDeep
 * @Date: 2020-08-18 16:38:42
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-18 16:52:35
 * @FilePath: \C++\ExerciseC++\07三目运算符.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2, c = 3;
    int max = a > b ? a : b;
    max = max > c ? max : c;
    cout << "最大值是" << endl;
    cout << max << endl;
    return 0;
}