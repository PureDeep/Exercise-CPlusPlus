/*
 * @Author: PureDeep
 * @Date: 2020-11-18 11:37:27
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-18 11:38:16
 * @FilePath: \Exercise-CPlusPlus\163dowhile.cpp
 */
long fact_do(long n)
{
    long result = 1;
    do
    {
        result *= n;
        n = n - 1;
    } while (n > 1);
    return result;
}