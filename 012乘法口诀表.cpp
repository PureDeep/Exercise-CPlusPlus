/*
 * @Author: PureDeep
 * @Date: 2020-08-18 18:51:04
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-18 18:53:16
 * @FilePath: \C++\ExerciseC++\012³Ë·¨¿Ú¾÷±í.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "x" << i << "=" << j * i << '\t';
        }
        cout << endl;
    }
    return 0;
}