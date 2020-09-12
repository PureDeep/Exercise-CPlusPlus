/*
 * @Author: PureDeep
 * @Date: 2020-09-07 15:34:19
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-07 15:42:39
 * @FilePath: \ExerciseC++\045refer.cpp
 */
#include <iostream>

using namespace std;
void func(int &ref)
{
    ref = 100;
}

int main()
{
    int a = 10;
    int &ref = a;
    ref = 20;
    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;
    cout << "========" << endl;
    func(a);
    cout << "a: " << endl;
    return 0;
}