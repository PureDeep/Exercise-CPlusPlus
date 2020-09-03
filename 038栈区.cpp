/*
 * @Author: PureDeep
 * @Date: 2020-09-03 12:00:54
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-03 12:21:29
 * @FilePath: \ExerciseC++\038Õ»Çø.cpp
 */
#include <iostream>

using namespace std;

int * func(int b){
    b = 100;
    int a = 10;
    return &a;
}

int main()
{
   int *p = func();
   cout << *p << endl;
   cout << *p << endl;
   return 0;
}