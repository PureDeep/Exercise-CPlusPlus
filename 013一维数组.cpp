/*
 * @Author: PureDeep
 * @Date: 2020-08-20 12:33:27
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-20 12:40:33
 * @FilePath: \C++\ExerciseC++\013Ò»Î¬Êý×é.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << sizeof(arr) << endl;
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    return 0;
}