/*
 * @Author: PureDeep
 * @Date: 2020-11-23 17:10:07
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 17:12:05
 * @FilePath: \Exercise-CPlusPlus\182iniate.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "A" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "B" << endl;
    }
};

class C : public A
{
    B b;

public:
    C()
    {
        cout << "C" << endl;
    }
};

int main(int argc, char *argv[])
{
    C obj;
    return 0;
}