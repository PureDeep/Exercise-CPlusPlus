/*
 * @Author: PureDeep
 * @Date: 2020-10-15 14:29:56
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 16:11:24
 * @FilePath: \Exercise-CPlusPlus\087cPlusPlusExercise.cpp
 */
#include <iostream>

using namespace std;

int &val()
{
    static int i = 10;
    cout << "&i: " << &i << endl;
    return i;
}

int main()
{
    int j = 0;
    j = val();
    cout << "j: " << j << endl;
    cout << "&j: " << &j << endl;
    return 0;
}