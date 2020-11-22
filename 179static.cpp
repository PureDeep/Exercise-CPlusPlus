/*
 * @Author: PureDeep
 * @Date: 2020-11-22 21:44:57
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-22 21:50:01
 * @FilePath: \Exercise-CPlusPlus\179static.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class Test
{
public:
    Test()
    {
        a = 0;
    }
    int f(int aa) const { return a; }
    void h(int b)
    {
        Test::b = b;
    }
    static int g()
    {
        return b;
    }

private:
    int a;
    static int b;
};

int main(int argc, char *argv[])
{

    return 0;
}