/*
 * @Author: PureDeep
 * @Date: 2020-11-25 19:43:53
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 19:45:01
 * @FilePath: \Exercise-CPlusPlus\207.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    A() { cout << "A" << endl; }
};

class B
{
public:
    B() { cout << "B" << endl; }
};

class C : public A
{
    B b;

public:
    C() { cout << "C" << endl; }
};

int main(int argc, char *argv[])
{
    C obj;

    return 0;
}