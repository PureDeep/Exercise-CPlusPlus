/*
 * @Author: PureDeep
 * @Date: 2020-11-23 19:32:56
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 19:35:09
 * @FilePath: \Exercise-CPlusPlus\185.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    int n;
};
class B : public A
{
};
class C : public A
{
};
class D : public B, public C
{
    int getn()
    {
        return B::n;
    }
};

int main(int argc, char *argv[])
{
    D d;
    d.B::n = 10;
    d.C::n = 20;
    cout << d.B::n << " " << d.C::n << endl;
    return 0;
}