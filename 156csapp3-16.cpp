/*
 * @Author: PureDeep
 * @Date: 2020-11-17 15:33:45
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-17 15:34:14
 * @FilePath: \Exercise-CPlusPlus\156csapp3-16.cpp
 */
void cond(long a, long *p)
{
    if (p && a > *p)
    {
        *p = a;
    }
}