/*
 * @Author: PureDeep
 * @Date: 2020-11-18 20:15:23
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-18 20:52:13
 * @FilePath: \Exercise-CPlusPlus\168csapp3-60.cpp
 */
long loop(long x, int n)
{
    long result = 0;
    long mask;
    for (mask = 1; mask != 0; mask <<= n)
    {
        result |= (x & mask);
    }
    return result;
}