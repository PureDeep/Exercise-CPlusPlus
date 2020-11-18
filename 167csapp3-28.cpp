/*
 * @Author: PureDeep
 * @Date: 2020-11-18 19:43:32
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-18 19:53:36
 * @FilePath: \Exercise-CPlusPlus\167csapp3-28.cpp
 */
long fun_b(unsigned long x)
{
    long val = 0;
    long i;
    for (i = 64; i > 0; i--)
    {
        val = (val << 1) | (x & 1);
        x >>= 1;
    }
    return val;
}