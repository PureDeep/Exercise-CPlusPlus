/*
 * @Author: PureDeep
 * @Date: 2020-08-18 17:00:59
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-18 18:07:03
 * @FilePath: \C++\ExerciseC++\08������.cpp
 */
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int x = rand() % 100 + 1;
    int ans = 0;
    cout << "������Ĳ²⣺" << endl;
    cin >> ans;
    while (ans != x)
    {
        if (ans > x)
        {
            cout << "���ˣ��ز£�" << endl;
        }
        else
        {
            cout << "С�ˣ��ز£�" << endl;
        }
        cin >> ans;
    }
    cout << "�¶��ˣ�" << endl;
    return 0;
}