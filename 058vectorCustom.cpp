/*
 * @Author: PureDeep
 * @Date: 2020-09-13 12:10:14
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-13 16:46:27
 * @FilePath: \ExerciseC++\058vectorCustom.cpp
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }

    void show()
    {
        cout << "Name: " << this->m_name << " Age: " << this->m_age << endl;
    }

private:
    string m_name;
    int m_age;
};

void test01()
{
    vector<Person> v1;

    Person p1("John", 10);
    Person p2("Jane", 20);
    Person p3("Tom", 30);

    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);

    for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        (*it).show();
    }
}

void test02()
{
    vector<Person *> v2;

    Person p1("John", 10);
    Person p2("Jane", 20);
    Person p3("Tom", 30);

    v2.push_back(&p1);
    v2.push_back(&p2);
    v2.push_back(&p3);

    for (vector<Person *>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        (*it)->show();
    }
}

int main()
{
    test01();
    cout << "================================" << endl;
    test02();
    return 0;
}