/*
 * @Author: PureDeep
 * @Date: 2020-10-18 20:53:42
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-18 20:55:07
 * @FilePath: \Exercise-CPlusPlus\108showBytes.cpp
 */
#include <iostream>
#include <stdio.h>

using namespace std;

typedef unsighed char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
    size_t i;
}
 
int main()
{
    int val = 0x87654321;
    byte_pointer valp = (byte_pointer)&val;

    return 0;
}