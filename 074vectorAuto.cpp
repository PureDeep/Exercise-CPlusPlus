/*
 * @Author: PureDeep
 * @Date: 2020-09-24 22:29:16
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-24 22:32:11
 * @FilePath: \ExerciseC++\074vectorAuto.cpp
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    for (auto &c : v)
    {
        c *= c;
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}