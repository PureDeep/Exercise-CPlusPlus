/*
 * @Author: PureDeep
 * @Date: 2020-09-07 10:39:01
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-07 11:59:21
 * @FilePath: \ExerciseC++\044returnQuote.cpp
 */
#include <iostream>

using namespace std;

// int& test01(){
//     int a = 10;
//     return a;
// }

int& test02(){
    static int a = 20;
    return a;
}

int main()
{
//    int& a = test01();
   int& b = test02();
   cout << "b: " << b << endl;
   test02() = 3000;
   cout << "b: " << b << endl;
   return 0;
}