/*
 * @Author: PureDeep
 * @Date: 2020-11-24 16:34:44
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 17:13:03
 * @FilePath: \Exercise-CPlusPlus\198.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class CharArray
{
public:
    CharArray(int len);
    ~CharArray();
    char &operator[](int i);
    int getlength() const { return length; }

private:
    int length;
    char *buff;
};

CharArray::CharArray(int len)
{
    length = len;
    buff = new char[length];
}

CharArray::~CharArray() { delete[] buff; }

char &CharArray::operator[](int i)
{
    static char ch = 0;
    if (i >= 0 && i < length)
    {
        return buff[i];
    }
    else
    {
        cout << "\nIndex out of range." << endl;
        return ch;
    }
}

int main(int argc, char *argv[])
{
    int j;
    CharArray string1(6);
    char *string2 = "abcdef";
    for (j = 0; j < 7; j++)
        string1[j] = string2[j];
    for (j = 0; j < 7; j++)
        cout << string1[j] << endl;
    cout << "\nlength: " << string1.getlength() << endl;
    return 0;
}