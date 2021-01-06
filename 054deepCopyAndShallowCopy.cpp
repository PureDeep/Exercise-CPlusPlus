/*
 * @Author: PureDeep
 * @Date: 2020-09-12 10:09:42
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-12 11:19:25
 * @FilePath: \ExerciseC++\054deepCopyAndShallowCopy.cpp
 */
#include <iostream>

using namespace std;

class Person
{
public:
    int m_age;
    int *m_height;

    Person()
    {
        cout << "Person() structer." << endl;
    }

    Person(int age, int height)
    {
        cout << "Person(int age) structer." << endl;
        m_age = age;
        m_height = new int(height);
    }

    ~Person()
    {
        cout << "Person() destructor." << endl;
        if(m_height!=NULL){
            delete m_height;
            m_height = NULL;
        }
    }
};

void test01()
{
    Person p1(18, 60);
    cout << "P1 age: " << p1.m_age << endl;
    cout << "P1 height: " << *p1.m_height << endl;
    cout << "P1 height address: " << p1.m_height << endl;
    Person p2(p1);
    cout << "P2 age: " << p2.m_age << endl;
}

int main()
{
    test01();
    return 0;
}