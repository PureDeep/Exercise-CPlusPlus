/*
 * @Author: PureDeep
 * @Date: 2020-12-04 10:44:02
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-04 11:00:53
 * @FilePath: \Exercise-CPlusPlus\230csapp-isTmax.cpp
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

int isTmax(int x)
{
    return !(x ^ ~(1 << 31)); //拿x和最大的32位补码做对比
}

int main(int argc, char *argv[])
{
    int x = 1 << 30;
    cout << isTmax(x) << endl;
    return 0;
}