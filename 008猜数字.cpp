/*
 * @Author: PureDeep
 * @Date: 2020-08-18 17:00:59
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-18 18:07:03
 * @FilePath: \C++\ExerciseC++\08猜数字.cpp
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
    cout << "输入你的猜测：" << endl;
    cin >> ans;
    while (ans != x)
    {
        if (ans > x)
        {
            cout << "大了，重猜！" << endl;
        }
        else
        {
            cout << "小了，重猜！" << endl;
        }
        cin >> ans;
    }
    cout << "猜对了！" << endl;
    return 0;
}