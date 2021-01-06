/*
 * @Author: PureDeep
 * @Date: 2020-10-28 10:23:45
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-28 10:58:44
 * @FilePath: \Exercise-CPlusPlus\125staticMember.cpp
 */
#include <iostream>

using namespace std;

class CoC
{
public:
    CoC(){};
    ~CoC(){};

    int x;
    static int s;
};
int s = 10;
int main()
{
    CoC c;
    c.x = 2;
    cout << c.x << endl;
    cout << c.s << endl;
    cout << s << endl;
    return 0;
}