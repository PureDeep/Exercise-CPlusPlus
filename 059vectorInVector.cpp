/*
 * @Author: PureDeep
 * @Date: 2020-09-13 16:49:11
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-14 16:24:28
 * @FilePath: \ExerciseC++\059vectorInVector.cpp
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void test01()
{
    vector<vector<int> > v;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    v1.push_back(10);
    v2.push_back(20);
    v3.push_back(30);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // cout << v[0][0] << " " << v[1][0] << " " << v[2][0] << endl;

    for(vector< vector<int> >::iterator it = v.begin(); it != v.end(); it++){
        for(vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++){
            cout << *it2 << endl;
        }
    }
}

int main()
{
    test01();
    return 0;
}