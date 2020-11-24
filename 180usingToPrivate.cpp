/*
 * @Author: PureDeep
 * @Date: 2020-11-23 10:21:17
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 10:44:33
 * @FilePath: \Exercise-CPlusPlus\180usingToPrivate.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class BC
{
public:
    void set_x(float a) { x = a; }

private:
    float x;
};

class DC : public BC
{
public:
    void set_y(float a) { y = a; }

private:
    float y;
    using BC::set_x;
};

int main(int argc, char *argv[])
{
    DC d;
    d.BC::set_x(10);
    return 0;
}