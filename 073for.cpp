/*
 * @Author: PureDeep
 * @Date: 2020-09-24 21:48:52
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-24 22:08:49
 * @FilePath: \ExerciseC++\073for.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    string str("hello world!");
    for (auto &c : str)
    {
        c = toupper(c);
    }
    cout << str << endl;
    return 0;
}