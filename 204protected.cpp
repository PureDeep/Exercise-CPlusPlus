/*
 * @Author: PureDeep
 * @Date: 2020-11-25 18:42:40
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 18:54:43
 * @FilePath: \Exercise-CPlusPlus\204protected.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
    int x;

public:
    void set_x(int value) { x = value; }

protected:
    int get_x() { return x; }
};

class B : public A
{
public:
    void add2(int value)
    {
        int c = get_x();
        set_x(c + value);
    }
    int getb_x() { return get_x(); }
};

int main(int argc, char *argv[])
{
    B b;
    b.set_x(20);
    b.add2(5);
    cout << b.getb_x() << endl;
    return 0;
}