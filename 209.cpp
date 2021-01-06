/*
 * @Author: PureDeep
 * @Date: 2020-11-25 19:53:53
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 19:58:15
 * @FilePath: \Exercise-CPlusPlus\209.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class Base
{
    int n;

public:
    Base(int a)
    {
        cout << "cb" << endl;
        n = a;
        cout << "n" << n << endl;
    }
    ~Base()
    {
        cout << "db" << endl;
    }
};

class Subs : public Base
{
    Base bobj;
    int m;

public:
    Subs(int a, int b, int c) : Base(a), bobj(b)
    {
        cout << "cs" << endl;
        m = b;
        cout << "m = " << m << endl;
    }
    ~Subs()
    {
        cout << "ds" << endl;
    }
};

int main(int argc, char *argv[])
{
    Subs s(1, 2, 3);
    return 0;
}