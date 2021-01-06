/*
 * @Author: PureDeep
 * @Date: 2020-08-20 12:42:06
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-20 12:44:32
 * @FilePath: \C++\ExerciseC++\014五只小猪称体重.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {300, 350, 200, 400, 250};
    int max = arr[0];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "最重的是" << max << endl;
}