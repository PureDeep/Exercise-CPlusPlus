/*
 * @Author: PureDeep
 * @Date: 2020-11-17 15:35:38
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-17 15:39:04
 * @FilePath: \Exercise-CPlusPlus\157csapp3-16.cpp
 */
void cond(long a, long *p)
{
    if (p == 0)
    {
        goto L1;
    }
    if (a <= *p)
    {
        goto L1;
    }
    *p = a;
L1:
    return;
}