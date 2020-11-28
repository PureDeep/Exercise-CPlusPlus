/*
 * @Author: PureDeep
 * @Date: 2020-11-26 08:49:40
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-26 08:50:15
 * @FilePath: \Exercise-CPlusPlus\217.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string s1 = "c++ is good!";
    char s2[30];
    s2 = s1;
    cout << s2 << endl;
    return 0;
}