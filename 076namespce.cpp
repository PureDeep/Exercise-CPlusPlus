/*
 * @Author: PureDeep
 * @Date: 2020-09-25 11:01:57
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-25 12:35:54
 * @FilePath: \Exercise-CPlusPlus\076namespce.cpp
 */
#include <iostream>

using namespace std;

namespace mfc
{
    int flag;
}

namespace ta
{
    void print(int n)
    {
        cout << "ta: " << n << endl;
    }
} // namespace ta

namespace tb
{
    void printb(int n)
    {
        cout << "tb: " << n << endl;
    }
} // namespace tb

namespace ta
{
    void print2(int n)
    {
        cout << "ta2: " << n << endl;
    }
} // namespace ta

int main()
{
    mfc::flag = 3;
    ta::print(10);
    ta::print2(20);
    tb::printb(30);
    return 0;
}