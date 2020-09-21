/*
 * @Author: PureDeep
 * @Date: 2020-09-20 12:09:06
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-20 12:12:12
 * @FilePath: \ExerciseC++\067auto.cpp
 */
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{1, 2, 3};
    for(auto &i : v){
        i *= i;
    }
    return 0;
}