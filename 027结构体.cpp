/*
 * @Author: PureDeep
 * @Date: 2020-08-24 16:01:25
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-24 16:36:42
 * @FilePath: \C++\ExerciseC++\027�ṹ��.cpp
 */
#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
    int score;

    void show(){
        cout << "name: " << name << ", age: " << age << ", score: " << score << endl;
    }
}s3;



int main(){
    struct Student s1;//struct����ʡ��
    s1.name = "����";
    s1.age = 22;
    s1.score = 98;
    s1.show();
    struct Student s2{"����",20,99};
    s2.show();
    s3.name = "����";
    s3.age = 24;
    s3.score = 95;
    s3.show();
    return 0;
}