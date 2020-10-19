/*
 * @Author: PureDeep
 * @Date: 2020-10-19 10:28:28
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-19 10:44:20
 * @FilePath: \Exercise-CPlusPlus\109enum.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    enum workDay
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday
    };
    workDay firstDay = Monday;
    // workDay lastDay = Sunday; error
    // workDay secondDay = 1; error
    cout << firstDay << endl;
    return 0;
}