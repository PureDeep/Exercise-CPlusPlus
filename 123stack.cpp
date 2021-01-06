/*
 * @Author: PureDeep
 * @Date: 2020-10-27 21:09:10
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-27 21:15:32
 * @FilePath: \Exercise-CPlusPlus\123stack.cpp
 */
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> num;
    cout << "Is stack num empty? " << num.empty() << endl;
    for (int i = 0; i < 10; i++)
    {
        num.push(i);
    }
    for (int i = 0; i < 10; i++)
    {
        int tmp = num.pop();
        cout << tmp << endl;
    }
    return 0;
}