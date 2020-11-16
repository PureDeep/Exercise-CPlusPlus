/*
 * @Author: PureDeep
 * @Date: 2020-11-16 11:12:52
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-16 17:40:12
 * @FilePath: \Exercise-CPlusPlus\145csapp3-58.cpp
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