/*
 * @Author: PureDeep
 * @Date: 2020-12-04 11:01:45
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-04 11:18:44
 * @FilePath: \Exercise-CPlusPlus\231csapp-allOddBits.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

/*
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int allOddBits(int x)
{
    return !(0xAAAAAAAA ^ (0xAAAAAAAA & x));
}

int main(int argc, char *argv[])
{
    int x = 0xFFFFFFFD;
    int y = 0xAAAAAAAB;
    cout << allOddBits(x) << endl;
    cout << allOddBits(y) << endl;
    return 0;
}