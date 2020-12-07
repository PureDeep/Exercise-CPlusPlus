/*
 * @Author: PureDeep
 * @Date: 2020-12-04 18:48:47
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-05 20:35:47
 * @FilePath: \Exercise-CPlusPlus\236csapp-logicNegate.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

/*
 * logicalNeg - implement the ! operator, using all of
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4
 */
int logicalNeg(int x)
{
    //x与相反数或操作,然后>>31位变成全0或者全1，再+1变成1或全0
    return (((~x + 1) | x) >> 31) + 1;
}

int main(int argc, char *argv[])
{
    cout << logicalNeg(3) << endl;
    cout << logicalNeg(0) << endl;
    cout << logicalNeg(1) << endl;
    return 0;
}