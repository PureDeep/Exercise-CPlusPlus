/*
 * @Author: PureDeep
 * @Date: 2020-11-28 16:22:04
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-28 16:30:25
 * @FilePath: \Exercise-CPlusPlus\222csapp3-35.cpp
 */
long rfun(unsigned long x)
{
    if (x == 0)
    {
        return x;
    }
    unsigned long nx = x >> 2;
    long rv = rfun(nx);
    return x + rv;
}