/*
 * @Author: PureDeep
 * @Date: 2020-10-16 08:40:28
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-16 19:32:49
 * @FilePath: \Exercise-CPlusPlus\101newAndDelete.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int *p = new int(5);
    if (p == 0)
    {
        cout << "Error";
        return -1;
    }
    cout << *p << endl;
    cout << p << endl;
    delete p;
    cout << *p << endl;
    cout << p << endl;
    int *q = new int[100];
    cout << *q << endl;
    cout << q << endl;
    delete[] q;
    cout << q << endl;

    cout << "********" << endl;

    cout << "Press any key?" << endl;
    getchar();
    unsigned char *p2 = new unsigned char[1024 * 1014 * 100];
    if (p2 == 0)
    {
        cout << "Error";
        return -1;
    }
    cout << "Scucess!" << endl;
    getchar();
    delete[] p2;
    cout << "Scucess released!" << endl;
    return 0;
}