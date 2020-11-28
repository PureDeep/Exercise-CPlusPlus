/*
 * @Author: PureDeep
 * @Date: 2020-11-26 08:52:05
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-26 08:53:11
 * @FilePath: \Exercise-CPlusPlus\218.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    try
    {
        int *ptr = new int;
    }
    catch (bad_alloc)
    {
        cerr << ".....";
        exit(EXIT_FAILURE);
    }
    *ptr = s;
    return 0;
}