/*
 * @Author: PureDeep
 * @Date: 2020-11-23 17:27:24
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 17:33:06
 * @FilePath: \Exercise-CPlusPlus\184.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class base
{
    int n;

public:
    base(int a)
    {
        cout << "cb" << endl;
        n = a;
        cout << "n = " << n << endl;
    }
    ~base()
    {
        cout << "db" << endl;
    }
};

class subs : public base
{
    base bobj;
    int m;

public:
    subs(int a, int b, int c) : base(a), bobj(c)
    {
        cout << "cs" << endl;
        m = b;
        cout << "m = " << m << endl;
    }
    ~subs()
    {
        cout << "ds" << endl;
    }
};

int main(int argc, char *argv[])
{
    subs s(1, 2, 3);
    return 0;
}