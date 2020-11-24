/*
 * @Author: PureDeep
 * @Date: 2020-11-24 16:12:34
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 16:23:30
 * @FilePath: \Exercise-CPlusPlus\197.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>

using namespace std;

class String
{
private:
    char *sPtr;
    int length;

public:
    String(const char *s);
    ~String();
    void myout()
    {
        cout << sPtr << endl;
    }
};

String::String(const char *s)
{
    cout << "类型转换构造函数called" << endl;
    length = strlen(s);
    sPtr = new char[length + 1];
    strcpy(sPtr, s);
}

String::~String()
{
    delete[] sPtr;
}

void fun(String &aa)
{
    String c("7890");
    c = aa;
}

int main()
{
    String a("12345"), b("67890");
    b = a;
    fun(a);
    a.myout();
    a = a;
    return 0;
}
