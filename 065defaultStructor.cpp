/*
 * @Author: PureDeep
 * @Date: 2020-09-19 10:13:54
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-19 10:19:49
 * @FilePath: \ExerciseC++\065defaultStructor.cpp
 */
#include <iostream>

using namespace std;

class Person
{
public:
    Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
    {
    }

    int m_A;
    int m_B;
    int m_C;
};

void test01()
{
    Person p(10, 20, 30);
    cout << p.m_A << endl;
    cout << p.m_B << endl;
    cout << p.m_C << endl;
}

int main()
{
    test01();
    return 0;
}