/*
 * @Author: PureDeep
 * @Date: 2020-11-23 11:34:53
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 11:49:36
 * @FilePath: \Exercise-CPlusPlus\181map.cpp
 */
//数据的插入--第一种：用insert函数插入pair数据
#include <map>

#include <string>

#include <iostream>

using namespace std;

int main()

{

    map<int, string> mapStudent;

    mapStudent.insert(pair<int, string>(1, "student_one"));

    mapStudent.insert(pair<int, string>(2, "student_two"));

    mapStudent.insert(pair<int, string>(3, "student_three"));

    mapStudent.insert(map<int, string>::value_type(4, "student_1"));

    mapStudent.insert(map<int, string>::value_type(5, "student_2"));

    mapStudent.insert(map<int, string>::value_type(6, "student_3"));

    mapStudent[1] = "hello";

    mapStudent[7] = "world";

    map<int, string>::iterator iter;

    int mSize = mapStudent.size();

    cout << "size: " << mSize << endl;

    for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)

        cout << iter->first << ' ' << iter->second << endl;
}