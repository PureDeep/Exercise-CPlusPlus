/*
 * @Author: PureDeep
 * @Date: 2020-08-22 18:00:36
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-22 18:45:29
 * @FilePath: \C++\ExerciseC++\024常量指针.cpp
 */
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    
    const int *p = &a;//常量指针，指向对象可以改变，但是指向对象的值不能改变
    int * const q = &a;//指针常量，指针的指向不可以改，但是指针指向的值可以改
}