/*
 * @Author: PureDeep
 * @Date: 2020-10-16 20:29:54
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-16 20:34:08
 * @FilePath: \Exercise-CPlusPlus\105golbal.cpp
 */
#include <iostream>

using namespace std;

int valT = 100;

int main()
{
    int valT = 25;
    cout << "valT: " << valT << endl;
    valT = 10;
    cout << "valT: " << valT << endl;
    cout << "::valT: " << ::valT << endl;
    ::valT = 90;
    cout << "valT: " << valT << endl;
    cout << "::valT: " << ::valT << endl;
    return 0;
}