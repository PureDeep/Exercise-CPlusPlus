/*
 * @Author: PureDeep
 * @Date: 2020-12-13 20:56:10
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-14 14:46:27
 * @FilePath: \Exercise-CPlusPlus\241Bag-Dp.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class item
{
public:
    char n; //name
    int w;  //weight
    int v;  //value
    item(char n, int w, int v) : n(n), w(w), v(v) {}
};

vector<vector<int>> getAnswer(vector<item> items, int bagSize)
{
    int size = items.size();
    vector<vector<int>> dp(size + 1, vector<int>(bagSize + 1, 0));
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= bagSize; j++)
        {
            if (j - items[i - 1].w < 0)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j - items[i - 1].w] + items[i - 1].v, dp[i - 1][j]);
            }
        }
    }
    return dp;
}

int main(int argc, char *argv[])
{
    //
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
    vector<vector<int>> ansVec = getAnswer(itemVec, bagSize);
    int ans = ansVec[itemVec.size()][bagSize];
    cout << ans << endl;
    return 0;
}