/*
 * @Author: PureDeep
 * @Date: 2020-09-11 18:45:38
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-11 19:55:11
 * @FilePath: \ExerciseC++\049authorityControl.cpp
 */
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Passwords;

public:
    void func()
    {
        m_Name = "ThreeZhang";
        m_Car = "Meituan";
        m_Passwords = 1234567890;
    }

    string getCarName(){
        return m_Car;
    }

    int getPasswords(){
        return m_Passwords;
    }
};

int main()
{
    Person p1;
    p1.func();
    cout << p1.m_Name << endl;
    cout << p1.getCarName() << endl;
    cout << p1.getPasswords() << endl;
    return 0;
}