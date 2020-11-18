/*
 * @Author: PureDeep
 * @Date: 2020-11-18 18:58:33
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-18 18:59:46
 * @FilePath: \Exercise-CPlusPlus\165csapp3-25.cpp
 */
long loop_while2(long a, long b)
{
    long result = b;
    while (b > 0)
    {
        result = result * a;
        b = b - a;
    }
    return result;
}