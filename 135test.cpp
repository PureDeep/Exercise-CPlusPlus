/*
 * @Author: PureDeep
 * @Date: 2020-11-12 13:24:42
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-12 13:24:55
 * @FilePath: \Exercise-CPlusPlus\135test.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

int main()
{
    cout << "sizeof(char):" << sizeof(char) << endl;
    cout << "sizeof(short):" << sizeof(short) << endl;
    cout << "sizeof(int):" << sizeof(int) << endl;
    cout << "sizeof(long):" << sizeof(long) << endl;
    cout << "sizeof(long long):" << sizeof(long long) << endl;
    cout << "sizeof(unsigned int):" << sizeof(unsigned int) << endl;
    cout << "sizeof(float):" << sizeof(float) << endl;
    cout << "sizeof(double):" << sizeof(double) << endl;
    void *pointer;
    cout << "sizeof(pointer):" << sizeof(pointer) << endl;

    system("pause");
    return 0;
}