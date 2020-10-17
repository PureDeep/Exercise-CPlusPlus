/*
 * @Author: PureDeep
 * @Date: 2020-10-16 20:37:36
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-16 20:45:41
 * @FilePath: \Exercise-CPlusPlus\106tryAndCatch.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;
    cout << "input: " << endl;
    cin >> a;
    cout << "input: " << endl;
    cin >> b;
    try
    {
        if (b == 0)
            throw 0;
        cout << "a/b = " << static_cast<double>(a) / b << endl;
    }
    catch (int err)
    {
        cout << "divide is: " << err << endl;
        cout << "output is infinity!" << endl;
    }
    return 0;
}