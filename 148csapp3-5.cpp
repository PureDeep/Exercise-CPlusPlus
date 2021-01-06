/*
 * @Author: PureDeep
 * @Date: 2020-11-16 16:58:09
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-16 17:01:11
 * @FilePath: \Exercise-CPlusPlus\148csapp3-5.cpp
 */
void decode1(long *xp, long *yp, long *zp)
{
    long x = *xp;
    long y = *yp;
    long z = *zp;
    *yp = x;
    *zp = y;
    *xp = z;
}