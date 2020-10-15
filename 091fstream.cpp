/*
 * @Author: PureDeep
 * @Date: 2020-10-15 19:24:18
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 19:28:36
 * @FilePath: \Exercise-CPlusPlus\091fstream.cpp
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("091a_in");
    ofstream fout("091a_out");

    int a, b;
    fin >> a >> b;
    fout << a + b;

    fin.close();
    fout.close();

    return 0;
}