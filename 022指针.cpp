/*
 * @Author: PureDeep
 * @Date: 2020-08-22 17:11:39
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-22 17:22:27
 * @FilePath: \C++\ExerciseC++\022指针.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    cout << "a的地址为：" << &a << endl;
    cout << "p的值为：" << p << endl;
    cout << "*p的值为：" << *p << endl;
    *p = 100;
    cout << "a的值为：" << a << endl;
    cout << "*p的值为：" << *p << endl;
    cout << "int类型指针所占内存大小：" << sizeof(p) << endl;
    return 0;
}