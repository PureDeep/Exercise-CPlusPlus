/*
 * @Author: PureDeep
 * @Date: 2020-08-18 18:25:19
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-18 18:44:21
 * @FilePath: \C++\ExerciseC++\010·ê7¹ý.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i / 10 == 7 || i % 10 == 7 || i % 7 == 0)
        {
            cout << "¹ý£¡" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}