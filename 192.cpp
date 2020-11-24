/*
 * @Author: PureDeep
 * @Date: 2020-11-24 12:41:59
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 12:45:31
 * @FilePath: \Exercise-CPlusPlus\192.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class B
{
public:
    virtual void f() { cout << "f()" << endl; }
};

class D : public B
{
public:
    void m() { cout << "m()" << endl; }
};

int main(int argc, char *argv[])
{
    D *p = dynamic_cast<D *>(new B);
    // p->m();
    // p->f();
    if (p)
        p->m();
    else
        cout << "error" << endl;
    return 0;
}