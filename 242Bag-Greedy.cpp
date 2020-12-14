/*
 * @Author: PureDeep
 * @Date: 2020-12-14 14:35:38
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-14 15:10:54
 * @FilePath: \Exercise-CPlusPlus\242Bag-Greedy.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class item
{
public:
    char n;     //num
    int w;      //weight
    int v;      //value
    float preV; //value per weight
    item(char n, int w, int v) : n(n), w(w), v(v), preV(v / w) {}
};
//用来sort排序比较的参数
bool a_more_b_perV(item a, item b)
{
    return a.preV > b.preV;
}

vector<item> getAnswer(vector<item> items, int bagSize)
{
    vector<item> tmp = items;
    vector<item> ansVec;
    sort(tmp.begin(), tmp.end(), a_more_b_perV); //按照单位重量价值递减排序
    int size = tmp.size();
    int totalW = 0;
    for (int i = 0; i < size; i++)
    {
        if (totalW + tmp[i].w <= bagSize)
        {
            totalW += tmp[i].w;
            ansVec.push_back(tmp[i]);
        }
        else
        {
            break;
        }
    }
    return ansVec;
}

int main(int argc, char *argv[])
{
    //初始化
    char N[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int W[] = {2, 2, 6, 5, 4};
    int V[] = {6, 3, 5, 4, 6};
    int bagSize = 10;
    vector<item> itemVec;
    for (int i = 0; i < 5; i++)
    {
        item tmp(N[i], W[i], V[i]);
        itemVec.push_back(tmp);
    }
    //
    vector<item> ansVec = getAnswer(itemVec, bagSize);
    int ans = 0;
    for (int i = 0; i < ansVec.size(); i++)
    {
        ans += ansVec[i].v;
    }
    cout << ans << endl;
    return 0;
}