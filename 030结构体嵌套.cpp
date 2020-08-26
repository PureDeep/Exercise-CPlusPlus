/*
 * @Author: PureDeep
 * @Date: 2020-08-24 17:07:45
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-24 17:16:22
 * @FilePath: \C++\ExerciseC++\030结构体嵌套.cpp
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

struct Teacher
{
    int id;
    string name;
    int age;
    Student stu;

    void show()
    {
        cout << "id: " << id << ", name: " << name << ", age: " << age << ", stu: " << stu.name << endl;
    }
};

int main()
{
    Student s1 = {"张三", 20, 99};
    Teacher t1 = {4399, "李四", 45, s1};
    t1.show();
    t1.stu.show();
}
