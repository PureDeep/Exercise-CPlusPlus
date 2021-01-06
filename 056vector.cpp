/*
 * @Author: PureDeep
 * @Date: 2020-09-12 15:41:35
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-12 15:51:36
 * @FilePath: \ExerciseC++\056vector.cpp
 */
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>nums(10);
    nums.insert(nums.begin(), 0);
    nums.insert(nums.end(),1);
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}