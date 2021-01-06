/*
 * @Author: PureDeep
 * @Date: 2020-10-27 12:39:58
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-27 12:54:51
 * @FilePath: \Exercise-CPlusPlus\118passingByReference.cpp
 */
#include <iostream>

using namespace std;

class C
{
public:
    void set(int n) { num = n; }
    int get() const { return num; }

private:
    int num;
};

void f(C &c)
{
    c.set(999);
    cout << c.get() << endl;
}

C &g()
{
    static C c1;
    c1.set(666);
    return c1;
}

int main()
{
    C c2 = g();
    cout << "c2.num: " << c2.get() << endl;
    f(c2);
    return 0;
}