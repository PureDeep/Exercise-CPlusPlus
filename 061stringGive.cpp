/*
 * @Author: PureDeep
 * @Date: 2020-09-14 17:11:15
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-14 17:19:06
 * @FilePath: \ExerciseC++\061stringGive.cpp
 */
#include <iostream>
#include <string>

using namespace std;

void test01(){
    string str1 = "hello world";
    cout << "str1 = " << str1 << endl;

    string str2;
    str2.assign("hello world");
    cout << "str2 = " << str2 << endl;

    string str3;
    str3.assign("hello world", 6);
    cout << "str3 = " << str3 << endl;
}

int main()
{
    test01();
    return 0;
}