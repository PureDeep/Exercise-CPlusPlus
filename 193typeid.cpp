/*
 * @Author: PureDeep
 * @Date: 2020-11-24 12:52:56
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 12:55:54
 * @FilePath: \Exercise-CPlusPlus\193typeid.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <typeinfo>

using namespace std;

int main(int argc, char *argv[])
{
    float x;
    cout << typeid(float).name() << endl;
    return 0;
}