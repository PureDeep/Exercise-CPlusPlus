/*
 * @Author: PureDeep
 * @Date: 2020-09-06 10:58:59
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-06 11:04:55
 * @FilePath: \ExerciseC++\043swap02.cpp
 */
#include <iostream>

using namespace std;

void mySwap01(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void mySwap02(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
   int a = 10;
   int b = 20;
   int *c = &a;
   int *d = &b;
   cout << "a: " << a << endl;
   cout << "b: " << b << endl;
   cout << "=======" << endl;
   mySwap01(a, b);
   cout << "a: " << a << endl;
   cout << "b: " << b << endl;
   cout << "=======" << endl;
   mySwap02(c, d);
   cout << "a: " << a << endl;
   cout << "b: " << b << endl;
   return 0;
}