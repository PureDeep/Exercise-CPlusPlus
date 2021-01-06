/*
 * @Author: PureDeep
 * @Date: 2020-09-12 12:07:28
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-19 10:04:34
 * @FilePath: \Exercise-CPlusPlus\055string.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    // string s1, s2;
    // cin >> s1 >> s2;
    // cout << s1 << " " << s2 << endl;

    // string word;
    // while (cin >> word)
    // {
    //     cout << word << endl;
    // }

    // string line;
    // while (getline(cin, line))
    // {
    //     if (line.size() > 10)
    //     {
    //         cout << line << endl;
    //     }
    // }

    string line;
    getline(cin, line);

    int len = line.size();
    cout << len << endl;

    return 0;
}