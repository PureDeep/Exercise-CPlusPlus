/*
 * @Author: PureDeep
 * @Date: 2020-09-07 18:12:58
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-07 18:16:09
 * @FilePath: \ExerciseC++\046funcOverload.cpp
 */
#include <iostream>

using namespace std;

void func1(int a){
    cout << "func1(int a)" << endl;
}

void func1(int a, int b = 10){
    cout << "func1(int a, int b = 10)" << endl;
}

int main()
{
    func1(10,20);
   return 0;
}