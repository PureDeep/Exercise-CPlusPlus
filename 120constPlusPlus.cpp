/*
 * @Author: PureDeep
 * @Date: 2020-10-27 13:47:27
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-27 14:08:44
 * @FilePath: \Exercise-CPlusPlus\120constPlusPlus.cpp
 */
#include <iostream>

using namespace std;

class sz
{
public:
    int &f1() //可修改num，也可以修改返回值
    {
        num = 5;
        return num;
    }
    int f2() const { return num; } //不能修改num，但是可以修改返回值
    const int &f3()                //可以修改num，但是不能修改返回值
    {
        num = 5;
        return num;
    }
    const int f4() const { return num; } //不能修改num，也不能修改返回值
    void print() { cout << "num:" << num << endl; }

private:
    int num;
};

int main()
{
    sz a1;
    int &p1 = a1.f1();
    p1 = 30;
    cout << "p1: " << p1 << endl;
    cout << "a1.num: " << a1.f4() << endl;
    int a = a1.f3();
    return 0;
}