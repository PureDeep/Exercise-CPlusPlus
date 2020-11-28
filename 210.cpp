/*
 * @Author: PureDeep
 * @Date: 2020-11-25 20:39:30
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 20:47:53
 * @FilePath: \Exercise-CPlusPlus\210.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
    int a;

public:
    A(int i) { a = i; }
    ~A(){};
    void print()
    {
        cout << a << endl;
    }
};

class B1 : virtual public A
{
    int b1;

public:
    B1(int i, int j) : A(i), b1(j){};
    ~B1(){};
    void print()
    {
        cout << b1 << endl;
    }
};

class B2 : virtual public A
{
    int b2;

public:
    B2(int i, int j) : A(i), b2(j){};
    ~B2(){};
    void print()
    {
        cout << b2 << endl;
    }
};

class C : public B1, public B2
{
    int c;

public:
    C(int i, int j, int k, int m, int n) : B1(i, j), B2(k, m), A(i) { c = n; }
    void print()
    {
        A::print();
        B1::print();
        B2::print();
        cout << c << endl;
    }
};

int main(int argc, char *argv[])
{
    C c(1, 2, 3, 4, 5);
    c.print();
    return 0;
}