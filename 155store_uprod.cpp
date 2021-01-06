/*
 * @Author: PureDeep
 * @Date: 2020-11-17 13:54:02
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-17 13:55:34
 * @FilePath: \Exercise-CPlusPlus\155store_uprod.cpp
 */
#include <inttypes.h>

typedef unsigned __int128 uint128_t;

void store_uprod(uint128_t *dest, uint64_t x, uint64_t y)
{
    *dest = x * (uint128_t)y;
}