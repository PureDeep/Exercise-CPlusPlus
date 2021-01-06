/*
 * @Author: PureDeep
 * @Date: 2020-12-07 19:44:18
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-07 19:44:18
 * @FilePath: \Exercise-CPlusPlus\240.cpp
 */
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int n, d[510], w[510], visit[510];
int i, j;
long long result;

int main()
{
    memset(visit, 0, sizeof(visit));
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> d[i];
    }
    for (i = 1; i <= n; i++)
    {
        cin >> w[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (w[j] < w[j + 1])
            {
                swap(d[j], d[j + 1]);
                swap(w[j], w[j + 1]);
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        bool flag = false;
        for (j = d[i]; j > 0; j--)
        {
            if (!visit[j])
            {
                visit[j] = 1;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            result += w[i];
        }
    }

    cout << result << endl;
    return 0;
}