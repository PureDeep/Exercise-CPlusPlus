/*
 * @Author: PureDeep
 * @Date: 2020-12-04 11:36:50
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-04 18:02:58
 * @FilePath: \Exercise-CPlusPlus\233csapp-isAsciiDigit.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

/*
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
 *   Example: isAsciiDigit(0x35) = 1.
 *            isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */

int isAsciiDigit(int x)
{
  //判断x是否大于0x30且小于0x39
  //补码相反数的操作~x+1
  return !((x + ~0x30 + 1) & (1 << 31)) & (!((0x39 + ~x + 1) & (1 << 31)));
}

int main(int argc, char *argv[])
{
    cout << isAsciiDigit(0x35) << endl;
    cout << isAsciiDigit(0x3a) << endl;
    cout << isAsciiDigit(0x05) << endl;
    return 0;
}