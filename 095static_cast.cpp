/*
 * @Author: PureDeep
 * @Date: 2020-10-15 20:30:28
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 20:33:54
 * @FilePath: \Exercise-CPlusPlus\095static_cast.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    float m;
    int i = 5, j = 3;
    m = static_cast<float>(i) / static_cast<float>(j);
    return 0;
}