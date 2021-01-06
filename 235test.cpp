/*
 * @Author: PureDeep
 * @Date: 2020-12-04 18:11:57
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-21 10:20:33
 * @FilePath: /Exercise-CPlusPlus/235test.cpp
 */
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int x, y = 10;
    vector<int> qq;
    x = (2) ? 4 : 5;
    cout << "x: " << x << endl;
    x = 0 ? 4 : 5;
    cout << "x: " << x << endl;
    x = -1 ? 4 : 5;
    cout << "x: " << x << endl;
    return 0;
}