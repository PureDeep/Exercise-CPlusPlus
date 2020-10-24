/*
 * @Author: PureDeep
 * @Date: 2020-10-21 10:37:58
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-21 10:44:26
 * @FilePath: \Exercise-CPlusPlus\112string.cpp
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "hello";
    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << endl;
    }
    return 0;
}