/*
 * @Author: PureDeep
 * @Date: 1970-01-01 08:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-28 10:47:17
 * @FilePath: /Exercise-CPlusPlus/248-sum.c
 */

int sum(int *a, int n)
{
    int i, s = 0;

    for (i = 0; i < n; i++)
    {
        s += a[i];
    }

    return s;
}