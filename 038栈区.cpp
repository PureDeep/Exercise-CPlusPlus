/*
 * @Author: PureDeep
 * @Date: 2020-09-03 12:00:54
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-03 16:39:12
 * @FilePath: \ExerciseC++\038Õ»Çø.cpp
 */
#include <iostream>

using namespace std;

int * func(){
    int b = 100;
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