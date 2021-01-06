/*
 * @Author: PureDeep
 * @Date: 2020-11-20 11:22:33
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-20 11:46:37
 * @FilePath: \Exercise-CPlusPlus\173substrAdd.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string s = "hello world hhhhhhh";
    string s2 = s.substr(0, 5) + s.substr(10);
    cout << s2 << endl;
    s2 = s2 + s.substr(5);
    cout << s2 << endl;
    s2 = s2 + s.substr(2, 5);
    cout << s2 << endl;
    return 0;
}