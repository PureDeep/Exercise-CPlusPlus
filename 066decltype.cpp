/*
 * @Author: PureDeep
 * @Date: 2020-09-20 11:15:35
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-20 11:20:00
 * @FilePath: \ExerciseC++\066decltype.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int i = 42;
    decltype(i) c = 20;
    c = 20;
    return 0;
}