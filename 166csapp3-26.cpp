/*
 * @Author: PureDeep
 * @Date: 2020-11-18 19:03:55
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-18 19:09:32
 * @FilePath: \Exercise-CPlusPlus\166csapp3-26.cpp
 */
long fun_a(unsigned long x)
{
    long val = 0;
    while (x != 0)
    {
        val = val ^ x;
        x = x >> 1;
    }
    val = val & 1;
    return val;
}