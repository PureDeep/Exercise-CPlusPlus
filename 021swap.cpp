/*
 * @Author: PureDeep
 * @Date: 2020-08-22 16:57:04
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-22 16:59:02
 * @FilePath: \C++\ExerciseC++\021swap.cpp
 */
#include"021swap.h"

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}