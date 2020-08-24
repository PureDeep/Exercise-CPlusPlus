/*
 * @Author: PureDeep
 * @Date: 2020-08-23 16:11:02
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-24 10:35:59
 * @FilePath: \C++\ExerciseC++\025swap.cpp
 */
#include<iostream>
using namespace std;

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}