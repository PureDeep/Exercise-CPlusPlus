/*
 * @Author: PureDeep
 * @Date: 2020-10-15 20:39:53
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 20:41:42
 * @FilePath: \Exercise-CPlusPlus\096bool.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    bool flag;
    flag = (3 < 5);
    cout << flag << endl; //默认缺省为noboolalpha
    cout << boolalpha << flag << endl;
    return 0;
}