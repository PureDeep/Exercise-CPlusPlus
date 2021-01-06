/*
 * @Author: PureDeep
 * @Date: 2020-11-15 16:20:04
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-15 16:20:55
 * @FilePath: \Exercise-CPlusPlus\144mult2.cpp
 */

long mult2(long, long);

void multstore(long x, long y, long *dest)
{
    long t = mult2(x, y);
    *dest = t;
}