/*
 * @Author: PureDeep
 * @Date: 2020-12-26 17:45:32
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-26 17:52:24
 * @FilePath: /Exercise-CPlusPlus/247-copy.c
 */

#include <stdio.h>
#include <stdlib.h>

int set_init(int data[])
{ //初始化

    int i, ilen;
    ilen = sizeof(data) / sizeof(data[0]);
    //RBRoot* root = NULL;
    //root = create_rbtree();
    printf("== 原始数据: ");
    for (i = 0; i < ilen; i++)
        printf("%d ", data[i]);
    printf("\n");

    for (i = 0; i < ilen; i++)
    {
        //set_insert(set, data[i]);
    }
    return 1;
}

void main()
{
    //Set *set= NULL;
    int a[9] = {10, 40, 30, 60, 90, 70, 20, 50, 80};
    set_init(a);
}