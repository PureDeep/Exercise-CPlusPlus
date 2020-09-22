/*
 * @Author: PureDeep
 * @Date: 2020-09-22 17:33:57
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-22 17:41:53
 * @FilePath: \ExerciseC--\069staticFuncInClass.cpp
 */
#include <iostream>

using namespace std;

class Person
{
public:
    static void func()
    {
        m_A = 100;
        //m_B = 20;
        cout << "func" << endl;
    }

    static int m_A;
    int m_B;

private:
    void func2()
    {
        cout << "func2" << endl;
    }
};

int m_A;

void test01()
{
    Person p;
    p.func();

    Person::func();
}

int main()
{
    test01();
    return 0;
}