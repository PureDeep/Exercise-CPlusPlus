/*
 * @Author: PureDeep
 * @Date: 2020-08-24 15:30:47
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-24 15:53:35
 * @FilePath: \C++\ExerciseC++\026√∞≈›≈≈–Ú.cpp
 */
#include <iostream>
using namespace std;

void bubbleSort(int *arr, int len);
void printArr(int *arr, int len);

int main()
{
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    printArr(arr, len);
    bubbleSort(arr, len);
    printArr(arr, len);
    return 0;
}

void bubbleSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArr(int *arr, int len)
{
    cout << "[";
    for (int i = 0; i < len; i++)
    {
        if (i != len - 1)
        {
            cout << arr[i] << ", ";
        }
        else
        {
            cout << arr[i];
        }
    }
    cout << "]" << endl;
}