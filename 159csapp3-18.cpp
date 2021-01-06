/*
 * @Author: PureDeep
 * @Date: 2020-11-17 16:03:10
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-17 16:11:53
 * @FilePath: \Exercise-CPlusPlus\159csapp3-18.cpp
 */
long test(long x, long y, long z)
{
    long val = x + y + z;
    if (x >= -3)
    {
        if (x <= 2)
        {
            val = x * z;
            return val;
        }
        else
        {
            return val;
        }
    }
    else if (y >= z)
    {
        val = y * z;
        return val;
    }
}