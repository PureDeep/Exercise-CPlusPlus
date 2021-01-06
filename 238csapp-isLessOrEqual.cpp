/*
 * @Author: PureDeep
 * @Date: 2020-12-04 19:59:05
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-05 16:51:33
 * @FilePath: \Exercise-CPlusPlus\238csapp-isLessOrEqual.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

/*
 * isLessOrEqual - if x <= y  then return 1, else return 0
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y)
{
    int sub = x + ~y + 1;          //sub = x - y
    int subSign = (sub >> 31) & 1; //获取x - y的正负号
    //x - y的结果为负，返回1，否则返回0
    return (!(x ^ y)) | subSign; //
}

int main(int argc, char *argv[])
{
    cout << isLessOrEqual(4, 5) << endl;
    cout << isLessOrEqual(4, 4) << endl;
    cout << isLessOrEqual(4, 3) << endl;
    return 0;
}