/*
 * @Author: PureDeep
 * @Date: 2020-10-28 11:26:56
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-28 11:32:06
 * @FilePath: \Exercise-CPlusPlus\126pointerNum.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int NumSize = 0;
    cout << "Input size: " << endl;
    cin >> NumSize;
    int *pNum = new int[NumSize];
    int *pCopy = pNum;
    cout << "Successfully created num[]!" << endl;
    for (int Index = 0; Index < NumSize; Index++)
    {
        cout << "Please enter number!" << endl;
        cin >> *(pNum + Index);
    }
    for (int Index = 0; Index < NumSize; Index++)
    {
        cout << *(pCopy + Index) << endl;
    }
    delete[] pNum;
    return 0;
}