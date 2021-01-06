/*
 * @Author: PureDeep
 * @Date: 2020-11-18 10:58:09
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-18 11:20:03
 * @FilePath: \Exercise-CPlusPlus\161csapp3-21.cpp
 */
long test(long x, long y)
{
    long val = 8 * x;
    if (y > 0)
    {
        if (x < y)
            val = y - x;
        else
            val = x & y;
    }
    else if (y <= -2)
        val = x + y;
    return val;
}