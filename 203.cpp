/*
 * @Author: PureDeep
 * @Date: 2020-11-25 18:34:28
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 18:40:40
 * @FilePath: \Exercise-CPlusPlus\203.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
    int i, j;

public:
    void get();
};

class B : public A
{
    int k;

public:
    // void make() { k = i * j; };
};

int main(int argc, char *argv[])
{

    return 0;
}