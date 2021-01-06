/*
 * @Author: PureDeep
 * @Date: 2020-08-24 16:59:43
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-24 17:01:46
 * @FilePath: \C++\ExerciseC++\029结构体指针.cpp
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

int main()
{
    Student s1 = {"张三", 20, 99};
    Student * p = &s1;
    p->show();
    return 0;
}