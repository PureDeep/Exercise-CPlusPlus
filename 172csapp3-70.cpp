/*
 * @Author: PureDeep
 * @Date: 2020-11-19 19:04:36
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-19 19:11:13
 * @FilePath: \Exercise-CPlusPlus\172csapp3-70.cpp
 */
union ele
{
    struct
    {
        long *p;
        long y;
    } e1;
    struct
    {
        long x;
        union ele *next;
    } e2;
};

void proc(union ele *up)
{
    up->e2.x = *(*(up->e2.next).e1.p) - *(up->e2.next).e1.y;
}