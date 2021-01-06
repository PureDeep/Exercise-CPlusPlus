/*
 * @Author: PureDeep
 * @Date: 2020-11-21 20:16:15
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-21 20:19:48
 * @FilePath: \Exercise-CPlusPlus\176fstream.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream fin("176in");
    ofstream fout("176out");
    int a, b;
    fin >> a >> b;
    fout << a + b;
    fin.close();
    fout.close();
    return 0;
}