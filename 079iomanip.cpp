/*
 * @Author: PureDeep
 * @Date: 2020-09-25 13:02:02
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-25 13:21:10
 * @FilePath: \Exercise-CPlusPlus\079iomanip.cpp
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i = 91;
    cout << "i = " << i << "(decimal)\n";
    cout << "i = " << oct << i << "(octal)\n";
    cout << "i = " << hex << i << "(hexal)\n";
    cout << "i = " << dec << i << "(decimal)\n";

    for (int i = 1; i < 10000; i *= 10)
    {
        cout << setw(6) << i << endl;
    }
    cout << setfill('*');
    for (int i = 1; i < 10000; i *= 10)
    {
        cout << setw(6) << i << endl;
    }

    float a = 1.05, b = 10.15, c = 200.87;
    cout << setfill('*') << setprecision(2);
    cout << setw(6) << a << endl;
    cout << setw(6) << b << endl;
    cout << setw(6) << c << endl;
    return 0;
}