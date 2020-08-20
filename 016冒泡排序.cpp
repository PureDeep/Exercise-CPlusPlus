/*
 * @Author: PureDeep
 * @Date: 2020-08-20 15:33:41
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-20 16:20:36
 * @FilePath: \C++\ExerciseC++\016√∞≈›≈≈–Ú.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int arr_length = sizeof(arr) / sizeof(arr[0]);

    cout << "≈≈–Ú«∞£∫" << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < arr_length - 1; i++)
    {
        for (int j = 0; j < arr_length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "≈≈–Ú∫Û£∫" << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}