/*
 * @Author: PureDeep
 * @Date: 2020-10-15 20:52:24
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 21:10:06
 * @FilePath: \Exercise-CPlusPlus\097getline.cpp
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string buffer;
    ifstream infile;
    ofstream outfile;
    cout << "Input file name: ";
    cin >> buffer;
    infile.open(buffer.c_str());
    cout << "Output file name: ";
    cin >> buffer;
    outfile.open(buffer.c_str());
    while (getline(infile, buffer))
        outfile << buffer << "\n\n";
    infile.close();
    outfile.close();
    return 0;
}