/*
 * @Author: PureDeep
 * @Date: 2020-10-19 15:28:39
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-19 15:32:03
 * @FilePath: \Exercise-CPlusPlus\111array.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int num[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " " << endl;
    }
    int num1[5] = {100};
    for (int i = 0; i < 5; i++)
    {
        cout << num1[i] << " " << endl;
    }
    return 0;
}