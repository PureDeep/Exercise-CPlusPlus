/*
 * @Author: PureDeep
 * @Date: 2020-10-27 14:08:59
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-27 14:27:59
 * @FilePath: \Exercise-CPlusPlus\121memberFunctionReload.cpp
 */
#include <iostream>

using namespace std;

class C
{
public:
    void set(const string &s) { name = s; }
    void set(const char *s) { name = s; }
    void print() { cout << name << endl; }

private:
    string name;
};

int main()
{
    string s = "Hello World!";
    C s1;
    s1.set(s);
    s1.print();
    s1.set("a");
    s1.print();
    return 0;
}