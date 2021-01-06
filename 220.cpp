/*
 * @Author: PureDeep
 * @Date: 2020-11-26 11:03:09
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-26 11:05:19
 * @FilePath: \Exercise-CPlusPlus\220.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    virtual ~A()
    {
        cout << "~A" << endl;
    }
};

class B : public A
{
    char *buf;

public:
    B(int i) { buf = new char[i]; }
    virtual ~B()
    {
        delete[] buf;
        cout << "~B" << endl;
    }
};

void fun(A *a) { delete a; }

int main(int argc, char *argv[])
{
    A *a = new B(10);
    fun(a);
    return 0;
}