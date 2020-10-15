/*
 * @Author: PureDeep
 * @Date: 2020-10-15 19:29:55
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 19:36:27
 * @FilePath: \Exercise-CPlusPlus\092getTax.cpp
 */
#include <iostream>
#include <fstream>

using namespace std;

const int cutoff = 6000;
const float rate1 = 0.3;
const float rate2 = 0.6;

int main()
{
    ifstream inFile;
    ofstream outFile;
    int income, tax;
    inFile.open("092income.in");
    outFile.open("092tax.out");
    while (inFile >> income)
    {
        if (income < cutoff)
        {
            tax = rate1 * income;
        }
        else
        {
            tax = rate2 * income;
        }
        outFile << "Income = " << income << " greenbacks\n"
                << "Tax = " << tax << " greenbacks\n";
    }
    inFile.close();
    outFile.close();
    return 0;
}