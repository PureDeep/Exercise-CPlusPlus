/*
 * @Author: PureDeep
 * @Date: 2020-08-22 17:11:39
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-22 17:22:27
 * @FilePath: \C++\ExerciseC++\022ָ��.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    cout << "a�ĵ�ַΪ��" << &a << endl;
    cout << "p��ֵΪ��" << p << endl;
    cout << "*p��ֵΪ��" << *p << endl;
    *p = 100;
    cout << "a��ֵΪ��" << a << endl;
    cout << "*p��ֵΪ��" << *p << endl;
    cout << "int����ָ����ռ�ڴ��С��" << sizeof(p) << endl;
    return 0;
}