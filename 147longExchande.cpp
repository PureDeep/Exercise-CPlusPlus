/*
 * @Author: PureDeep
 * @Date: 2020-11-16 16:38:17
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-16 16:40:43
 * @FilePath: \Exercise-CPlusPlus\147longExchande.cpp
 */
long exchange(long *xp, long y)
{
    long x = *xp;
    *xp = y;
    return x;
}