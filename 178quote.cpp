/*
 * @Author: PureDeep
 * @Date: 2020-11-22 10:34:02
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-22 10:39:31
 * @FilePath: \Exercise-CPlusPlus\178quote.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 20;
    int &m = a;
    cout << "&a = " << &a << endl;
    cout << "m = " << m << endl;
    cout << "&m = " << &m << endl;
    m++;
    cout << "m = " << m << endl;
    cout << "a = " << a << endl;
    int *p = &m;
    cout << "p = " << p << endl;
    cout << "&p = " << &p << endl;
    cout << "*p = " << *p << endl;
    return 0;
}