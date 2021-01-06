/*
 * @Author: PureDeep
 * @Date: 2020-10-15 21:14:28
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 21:33:25
 * @FilePath: \Exercise-CPlusPlus\098swap.cpp
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "This is a string.";
    string s2 = "Test.";
    s1.swap(s2);
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}
