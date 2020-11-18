/*
 * @Author: PureDeep
 * @Date: 2020-11-18 11:20:35
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-18 11:20:43
 * @FilePath: \Exercise-CPlusPlus\162csapp3-21.c
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