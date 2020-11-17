/*
 * @Author: PureDeep
 * @Date: 2020-11-17 15:40:51
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-17 15:46:09
 * @FilePath: \Exercise-CPlusPlus\158csapp3-17.cpp
 */
long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se(long x, long y)
{
    long result;
    long t = y - x;
    if (t)
    {
        goto TRUE;
    }
    else
        goto DONE;
TRUE:
    ge_cnt++;
    result = x - y;
    return result;
DONE:
    lt_cnt++;
    result = y - x;
    return result;
}