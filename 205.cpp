/*
 * @Author: PureDeep
 * @Date: 2020-11-25 19:10:45
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 19:38:13
 * @FilePath: \Exercise-CPlusPlus\205.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class BC
{
public:
    BC() { cout << "BC()" << endl; }
    BC(int a)
    {
        cout << "BC::(int)" << endl;
        x = a;
    }

private:
    int x;
};

class DC : public BC
{
public:
    DC() {}
    DC(int m, int n) : BC(m)
    {
        y = n;
        cout << "DC(int, int)" << endl;
    }

private:
    int y;
};

int main(int argc, char *argv[])
{
    BC b;
    DC a;
    DC(19, 20);
    return 0;
}