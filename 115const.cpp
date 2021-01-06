/*
 * @Author: PureDeep
 * @Date: 2020-10-24 11:32:48
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-27 12:58:03
 * @FilePath: \Exercise-CPlusPlus\115const.cpp
 */
#include <iostream>

using namespace std;

/*
 * FunctionConst.h
 */

#ifndef FUNCTIONCONST_H_
#define FUNCTIONCONST_H_

class FunctionConst
{
public:
    int value;
    FunctionConst();
    virtual ~FunctionConst();
    const int getValue();
    int getValue2() const;
};

#endif /* FUNCTIONCONST_H_ */

/*
 * FunctionConst.cpp
 */

// #include "FunctionConst.h"

FunctionConst ::FunctionConst() : value(100)
{
    // TODO Auto-generated constructor stub
}

FunctionConst ::~FunctionConst()
{
    // TODO Auto-generated destructor stub
}

const int FunctionConst ::getValue()
{
    return value; //返回值是 const, 使用指针时很有用.
}

int FunctionConst ::getValue2() const
{
    //此函数不能修改class FunctionConst的成员函数 value
    value = 15; //错误的, 因为函数后面加 const
    return value;
}