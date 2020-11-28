/*
 * @Author: PureDeep
 * @Date: 2020-11-26 09:01:27
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-26 09:02:19
 * @FilePath: \Exercise-CPlusPlus\219.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    A() { cout << "A" << endl; }
};

int main(int argc, char *argv[])
{
    A *p;
    delete p;
    return 0;
}