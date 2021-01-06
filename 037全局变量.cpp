/*
 * @Author: PureDeep
 * @Date: 2020-09-03 09:57:59
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-03 10:29:59
 * @FilePath: \ExerciseC++\037全局变量.cpp
 */
#include <iostream>

using namespace std;

int g_a = 10;
const int c_g_a = 20;

int main()
{
   int a = 20;
   cout << "a: " << (int)&a << endl;
   cout << "g_a: " << (int)&g_a << endl;

   static int s_a = 30;
   cout << "s_a:" << (int)&s_a << endl;

   cout << "字符串常量的地址：" << (int)&"helloworld" << endl;

   const int c_a = 40;
   cout << "const c_g_a: " << (int)&c_g_a << endl;
   cout << "c_a: " << (int)&c_a << endl;
   return 0;
}