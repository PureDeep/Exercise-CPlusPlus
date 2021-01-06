/*
 * @Author: PureDeep
 * @Date: 2020-11-19 17:04:32
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-19 17:55:56
 * @FilePath: \Exercise-CPlusPlus\170csapp3-63.cpp
 */

long switch_prob(long x, long n)
{
    long result = x;
    switch (n)
    {
    case 60:
    case 62:
        result = 8 * x;
        break;
    case 63:
        result = x >> 3;
        break;
    case 64:
        result = x * 15;
    case 65:
        x *= x;
    default:
        result = x + 75;
    }
    return result;
}