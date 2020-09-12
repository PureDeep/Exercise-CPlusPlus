/*
 * @Author: PureDeep
 * @Date: 2020-09-12 09:26:41
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-12 09:50:56
 * @FilePath: \ExerciseC++\053copyStructer.cpp
 */
#include <iostream>

using namespace std;

class Person
{
public:
    int m_age;

public:
    Person()
    {
        cout << "Person() structer function." << endl;
    }

    Person(int age)
    {
        cout << "Person(int age) structer function." << endl;
        m_age = age;
    }

    Person(const Person &p)
    {
        cout << "Person(const & p) structer function." << endl;
        m_age = p.m_age;
    }

    ~Person()
    {
        cout << "~Person() function." << endl;
    }

    void setAge(int age)
    {
        m_age = age;
    }

    int getAge()
    {
        return m_age;
    }
};

int main()
{
    Person p1(20);
    cout << "P1 age: " << p1.getAge() << endl;
    Person p2(p1);
    cout << "P2 age: " << p2.getAge() << endl;
    return 0;
}