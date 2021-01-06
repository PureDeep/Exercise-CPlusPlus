/*
 * @Author: PureDeep
 * @Date: 2020-10-29 11:26:56
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-29 11:28:56
 * @FilePath: \Exercise-CPlusPlus\129mstore.cpp
 */
long mult2(long, long);

void multStore(long x, long y, long *dest)
{
    long t = mult2(x, y);
    *dest = t;
}