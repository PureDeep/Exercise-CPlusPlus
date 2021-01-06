/*
 * @Author: PureDeep
 * @Date: 2020-12-04 10:44:02
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-05 17:12:32
 * @FilePath: \Exercise-CPlusPlus\230csapp-isTmax.cpp
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

int isTmax(int x)
{
    return !(~((x + 1) + x) | !(x + 1)); //如果x是最大值，那么x+1会变成最小值
}

int isTmax2(int x)
{
    return !!(x + 1) && !(x + x + 2);
}

int main(int argc, char *argv[])
{
    int x = 0x7fffffff;
    cout << isTmax(x) << endl;
    cout << isTmax2(x) << endl;
    return 0;
}