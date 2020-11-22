/*
 * @Author: PureDeep
 * @Date: 2020-11-21 20:28:10
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-21 20:30:22
 * @FilePath: \Exercise-CPlusPlus\177openfile.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream fin;
    fin.open("176in");
    int a, b;
    fin >> a >> b;
    cout << a << b << endl;
    fin.close();
    return 0;
}