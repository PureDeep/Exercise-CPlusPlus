/*
 * @Author: PureDeep
 * @Date: 2020-12-04 11:20:37
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-04 11:35:26
 * @FilePath: \Exercise-CPlusPlus\232csapp-negate.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

/*
 * negate - return -x
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x)
{
    return ((~x) + 1);
}

int main(int argc, char *argv[])
{
    std::cout << negate(1) << std::endl;
    std::cout << negate(6) << std::endl;
    return 0;
}