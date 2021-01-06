/*
 * @Author: PureDeep
 * @Date: 2020-09-24 16:47:13
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-24 17:07:32
 * @FilePath: \Exercise-CPlusPlus\072yingyong.cpp
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // int ival = 1024;
    // int &refVal = ival;

    // int *ip1, *ip2;
    // double dp, *dp2;

    // ip1 = &ival;
    // cout << ip1 << " " << *ip1 << endl;

    // int i = 42;
    // int &r = i;
    // int *p;
    // p = &i;
    // *p = i;
    // int &r2 = *p;
    // r2 = 30;
    // cout << i << endl;

    // int *p1 = nullptr;
    // int *p2 = 0;
    // int *p3 = NULL;
    // cout << *p1 << " " << *p2 << " " << *p3 << endl;

    int a = 10, *p = &a;
    void *p1 = &a;
    p1 = p;

    return 0;
}