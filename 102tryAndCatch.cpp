/*
 * @Author: PureDeep
 * @Date: 2020-10-16 09:17:02
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-16 09:22:28
 * @FilePath: \Exercise-CPlusPlus\102tryAndCatch.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    double m, n;
    cin >> m >> n;
    try
    {
        cout << "" << endl;
        if (n == 0)
        {
            throw -1;
        }
        else
        {
            cout << m / n << endl;
            cout << " " << endl;
        }
        catch (int x)
        {
            cout << "Error" << endl;
        }
    }
    return 0;
}