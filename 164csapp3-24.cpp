/*
 * @Author: PureDeep
 * @Date: 2020-11-18 11:55:08
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-18 18:42:28
 * @FilePath: \Exercise-CPlusPlus\164csapp3-24.cpp
 */
long loop_while(long a, long b)
{
    long result = 1;
    while (a < b)
    {
        result = result * (a + b);
        a++;
    }
    return result;
}