/*
 * @Author: PureDeep
 * @Date: 2020-09-22 19:29:26
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-22 19:44:44
 * @FilePath: \ExerciseC++\071thisPointer.cpp
 */
#include <iostream>

using namespace std;

class Person
{
public:
    Person(int age)
    {
        this->age = age;
    }

    Person& PersonAddAge(Person& person){
        this->age += person.age;
        return *this;
    }

    int age;
};

void test01()
{
    Person p1(18);
    cout << "p1 is " << p1.age << " years old." << endl;
}

void test02()
{
    Person p1(10);
    Person p2(10);
    p2.PersonAddAge(p1).PersonAddAge(p1);
    cout  << "p2 is " << p2.age << " years old." << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}