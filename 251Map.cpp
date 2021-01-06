/*
 * @Author: PureDeep
 * @Date: 1970-01-01 08:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2021-01-06 12:58:55
 * @FilePath: /Exercise-CPlusPlus/251Map.cpp
 */
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(int argc, char *argv[])
{
    map<string, int> dict;
    dict.insert(pair<string, int>("cat", 2));
    dict.insert(map<string, int>::value_type("banana", 1));
    dict["apple"] = 10;
    for (auto p : dict)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}