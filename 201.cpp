/*
 * @Author: PureDeep
 * @Date: 2020-11-25 12:45:19
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 19:03:59
 * @FilePath: \Exercise-CPlusPlus\201.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

template <class T>
class Sample
{
    T n;

public:
    Sample(T i) { n = i; }
    void operator++();
    void disp() { cout << "n = " << n << endl; }
};

template <class T>
void Sample<T>::operator++()
{
    n += 1;
}

int main(int argc, char *argv[])
{
    Sample<char> s('a');
    s++;
    s.disp();
    return 0;
}