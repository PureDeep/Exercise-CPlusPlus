/*
 * @Author: PureDeep
 * @Date: 2020-11-24 13:53:12
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 13:56:14
 * @FilePath: \Exercise-CPlusPlus\196operator.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class Opair
{
public:
    Opair(float f1 = 0.0, float f2 = 0.0)
    {
        p1 = f1;
        p2 = f2;
    }
    bool operator==(const Opair &other) const
    {
        return p1 == other.p1 && p2 == other.p2;
    }

private:
    float p1, p2;
};

int main(int argc, char *argv[])
{
    Opair s1(2, 3), s2(2, 30);
    if (s1 == s2)
    {
        cout << "Yes" << endl;
    }
    return 0;
}