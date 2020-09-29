/*
 * @Author: PureDeep
 * @Date: 2020-09-29 16:26:37
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-29 16:47:39
 * @FilePath: \Exercise-CPlusPlus\080voidPointer.cpp
 */
#include <iostream>

using namespace std;

class Person
{
public:
    void showClassName()
    {
        cout << "This is Person class" << endl;
    }

    void showPersonAge()
    {
        if (this == NULL)
        {
            return;
        }
        cout << "age = " << this->m_Age << endl;
    }

    int m_Age;
};

void test01()
{
    Person *p = NULL;
    p->showClassName();
    p->showPersonAge();
}

int main()
{
    test01();
    return 0;
}