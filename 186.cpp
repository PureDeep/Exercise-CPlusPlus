/*
 * @Author: PureDeep
 * @Date: 2020-11-23 21:00:10
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 21:04:52
 * @FilePath: \Exercise-CPlusPlus\186.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    virtual void Hi()
    {
        cout << "A Hi" << endl;
    }
};

class B : public A
{
public:
    virtual void Hi()
    {
        cout << "B Hi" << endl;
    }
};

class C : public A
{
public:
    virtual void Hi() { cout << "C Hi" << endl; }
};

int main(int argc, char *argv[])
{
    A *p;
    int which;
    cin >> which;
    switch (which)
    {
    case 1:
        p = new A;
        break;
    case 2:
        p = new B;
        break;
    case 3:
        p = new C;
        break;
    default:
        break;
    }
    p->Hi();
    delete p;
    return 0;
}