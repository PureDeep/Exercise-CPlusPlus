/*
 * @Author: PureDeep
 * @Date: 2020-10-15 19:14:04
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 19:15:30
 * @FilePath: \Exercise-CPlusPlus\090fillStar.cpp
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setfill('*');
    for (int i = 1; i <= 1000; i *= 10)
    {
        cout << setw(6) << i << "\n";
    }
    return 0;
}