/*
 * @Author: PureDeep
 * @Date: 2020-09-07 18:21:43
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-07 18:27:06
 * @FilePath: \ExerciseC++\047circle.cpp
 */
#include <iostream>

using namespace std;
// #define PI 3.14
const double PI = 3.14;

class Circle
{
public:
    int m_r;

    double calculateD()
    {
        return 2 * PI * m_r;
    }
};

int main()
{
    Circle a;
    a.m_r = 10;
    cout << a.calculateD() << endl;
    return 0;
}