/*
 * @Author: PureDeep
 * @Date: 2020-08-24 16:42:35
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-24 16:58:01
 * @FilePath: \C++\ExerciseC++\028结构体数组.cpp
 */
#include<iostream>
#include<string>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;

    void show(){
        cout << "name: " << name << ", age: " << age << ", score: " << score << endl;
    }
};

int main(){
    struct Student arr[3] = {
        {"张三", 20, 95},
        {"李四", 21, 96},
        {"王五", 22, 97}
    };
    arr[2].name = "罗六";
    arr[2].age = 24;
    arr[2].score = 99;
    
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < len; i++){
        arr[i].show();
    }

    return 0;
}