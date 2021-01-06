/*
 * @Author: PureDeep
 * @Date: 2020-10-27 13:31:28
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-27 13:41:40
 * @FilePath: \Exercise-CPlusPlus\119constPlus.cpp
 */
#include <iostream>

using namespace std;

class C
{
public:
    void set(const int &a)
    {
        num = a;
    }

    int get() const
    {
        return num;
    }

private:
    int num;
};

int main()
{
    C c;
    int a = 20;
    c.set(a);
    cout << "c: " << c.get() << endl;
    // c.get() = 30;
    cout << "c: " << c.get() << endl;
    return 0;
}