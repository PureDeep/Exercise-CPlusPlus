/*
 * @Author: PureDeep
 * @Date: 2020-09-03 16:17:23
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-03 16:24:41
 * @FilePath: \ExerciseC++\040ÒýÓÃ.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int &b = a;
    int c = 10;

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "b: " << b << endl;
    cout << "&b: " << &b << endl;
    cout << "&c: " << &c << endl;
    cout << "========" << endl;

    b = 20;
    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "b: " << b << endl;
    cout << "&b: " << &b << endl;
    cout << "&c: " << &c << endl;
    cout << "========" << endl;

    b = c;
    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "b: " << b << endl;
    cout << "&b: " << &b << endl;
    cout << "&c: " << &c << endl;
    cout << "========" << endl;
    return 0;
}