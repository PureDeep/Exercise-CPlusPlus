/*
 * @Author: PureDeep
 * @Date: 2020-08-22 18:00:36
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-22 18:45:29
 * @FilePath: \C++\ExerciseC++\024����ָ��.cpp
 */
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    
    const int *p = &a;//����ָ�룬ָ�������Ըı䣬����ָ������ֵ���ܸı�
    int * const q = &a;//ָ�볣����ָ���ָ�򲻿��Ըģ�����ָ��ָ���ֵ���Ը�
}