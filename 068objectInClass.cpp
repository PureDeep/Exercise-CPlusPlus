/*
 * @Author: PureDeep
 * @Date: 2020-09-22 17:09:06
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-22 17:25:02
 * @FilePath: \ExerciseC--\068objectInClass.cpp
 */
#include <iostream>

using namespace std;

class Phone
{
public:
    Phone(string name) : pName(name)
    {
        cout << "Phone()" << endl;
    }

    ~Phone()
    {
        cout << "~Phone()" << endl;
    }

    string pName;
};

class Person
{
public:
    Person(string m_name, string p_name) : mName(m_name), mPhone(p_name)
    {
        cout << "Person()" << endl;
    }

    ~Person()
    {
        cout << "~Person()" << endl;
    }

    string mName;
    Phone mPhone;
};

void test01()
{
    Person p("zhangsan", "666");
    cout << p.mName << " " << p.mPhone.pName << " " << endl;
}

int main()
{
    test01();
    return 0;
}