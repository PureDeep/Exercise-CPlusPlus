/*
 * @Author: PureDeep
 * @Date: 2020-08-20 16:38:33
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-20 17:39:19
 * @FilePath: \C++\ExerciseC++\018øº ‘≥…º®Õ≥º∆.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int scores[3][3] = {
        {100, 100, 100},
        {90, 50, 100},
        {60, 70, 80}};
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += scores[i][j];
        }
        cout << sum << endl;
    }
    return 0;
}