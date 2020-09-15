/*
 * @Author: PureDeep
 * @Date: 2020-09-13 11:33:02
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-13 12:02:34
 * @FilePath: \ExerciseC++\057vectorForEach.cpp
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Print(int val){
    cout << val << endl;
}

void test01()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    // vector<int>::iterator itBegin = v1.begin();
    // vector<int>::iterator itEnd = v1.end();

    // while(itBegin != itEnd){
    //     cout << *itBegin << endl;
    //     itBegin++;
    // }

    // for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
    //     cout << *it << endl;
    // }

    for_each(v1.begin(), v1.end(), Print);
}

int main()
{
    test01();
    return 0;
}