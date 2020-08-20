/*
 * @Author: PureDeep
 * @Date: 2020-08-20 15:21:12
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-20 15:28:51
 * @FilePath: \C++\ExerciseC++\015数组首位兑换.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 5, 4};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[sizeof(arr) / sizeof(arr[0]) - 1 - i];
        arr[sizeof(arr) / sizeof(arr[0]) - 1 - i] = temp;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
}