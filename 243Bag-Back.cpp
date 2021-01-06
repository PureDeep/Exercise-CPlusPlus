/*
 * @Author: PureDeep
 * @Date: 2020-12-14 20:24:12
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-14 20:52:16
 * @FilePath: \Exercise-CPlusPlus\243Bag-Back.cpp
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

void backTrack(int n, List[] L)
{
    if (n >= listnum)
    {
        if (curValue > maxValue)
        {
            maxValue = curValue;
            result = Arrays.copyOf(isHas, listnum);
        }
        return;
    }
    r -= L[n].v;
    if (curWeight + L[n].w <= pack)
    {
        isHas[n] = true;
        curValue += L[n].v;
        curWeight += L[n].w;
        backTrack(n + 1, L);
        curValue -= L[n].v;
        curWeight -= L[n].w;
    }
    if (curValue + r > maxValue)
    {
        isHas[n] = false;
        backTrack(n + 1, L);
    }
    r += L[n].v;
}
}

int main(int argc, char *argv[])
{
    //
    char N[] = {'a', 'b', 'c', 'd', 'e'};
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

    return 0;
}