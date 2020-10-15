/*
 * @Author: PureDeep
 * @Date: 2020-10-15 20:10:58
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 20:18:59
 * @FilePath: \Exercise-CPlusPlus\093const.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int b = 5;
    const int *a = &b;
    //error: *a = 6;
    //和 int const *a = &b; 一样的效果
    //指针指向的对象的指不能改变，但是可以改变指针的指向，即让指针指向另外一个对象
    const int x = 5, y = 10;
    const int *ptr = &x;
    //error: *ptr  = 4;
    ptr = &y; //改变指针指向是允许的
    return 0;
}