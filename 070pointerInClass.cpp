/*
 * @Author: PureDeep
 * @Date: 2020-09-22 17:45:44
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-22 19:28:10
 * @FilePath: \ExerciseC++\070pointerInClass.cpp
 */
#include <iostream>

using namespace std;

class Person
{
public:
    static int m_static;
    int m_A;
    void func(){}
};

void test01()
{
    Person p;
    cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
    test01();
    return 0;
}