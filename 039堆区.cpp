/*
 * @Author: PureDeep
 * @Date: 2020-09-03 15:32:37
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-03 15:56:34
 * @FilePath: \ExerciseC++\039¶ÑÇø.cpp
 */
#include <iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

int* func(){
    int* a = new int(10);
    return a;
}

int main()
{
   int* p = func();

   delete p;
   cout << endl;
   cout << *p << endl;
   return 0;
}