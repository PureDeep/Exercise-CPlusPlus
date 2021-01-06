/*
 * @Author: PureDeep
 * @Date: 2020-11-16 17:37:58
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-16 17:39:23
 * @FilePath: \Exercise-CPlusPlus\149csapp3-58.c
 */
long long decode2(long long x, long long y, long long z)
{
    y = y - z;
    x = x * y;
    long long res = y;
    res = res << 63;
    res = res >> 63;
    res = res ^ x;
    return res;
}