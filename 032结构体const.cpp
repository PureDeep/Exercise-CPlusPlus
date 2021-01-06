/*
 * @Author: PureDeep
 * @Date: 2020-08-24 17:41:23
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-24 17:42:24
 * @FilePath: \C++\ExerciseC++\032结构体const.cpp
 */
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;

    void show()
    {
        cout << "name: " << name << ", age: " << age << ", score: " << score << endl;
    }
};

void printStudent1(Student s)
{
    s.age = 100;
    cout << "name: " << s.name << ", age: " << s.age << ", score: " << s.score << endl;
}

void printStudent2(const Student * p)
{
    //p->age = 150;
    cout << "name: " << p->name << ", age: " << p->age << ", score: " << p->score << endl;
}

int main()
{
    Student s = {"张三", 20, 99};
    printStudent1(s);
    printStudent2(&s);
    cout << "name: " << s.name << ", age: " << s.age << ", score: " << s.score << endl;
    return 0;
}