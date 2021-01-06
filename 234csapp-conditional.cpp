/*
 * @Author: PureDeep
 * @Date: 2020-12-04 18:03:47
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-04 18:44:36
 * @FilePath: \Exercise-CPlusPlus\234csapp-conditional.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

/*
 * conditional - same as x ? y : z
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int conditional(int x, int y, int z)
{
    // /(x ^ 0)判断x是否等于零，等于零结果为0，不等于零结果为1
    return ((~(x^0))&y)|(((x^0)&z));
}

int main(int argc, char *argv[])
{
    cout << conditional(2,4,5) << endl;
    return 0;
}