/*
 * @Author: PureDeep
 * @Date: 2020-11-16 21:46:27
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-16 21:49:30
 * @FilePath: \Exercise-CPlusPlus\154substr.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string s = "hello world";
    cout << s.substr(0, 5) << endl;
    cout << s.substr(2) << endl;
    cout << s.substr(0, 2) << endl;
    cout << s.substr(1, 2) << endl;
    cout << s.substr(0, 1) << endl;
    return 0;
}