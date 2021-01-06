/*
 * @Author: PureDeep
 * @Date: 2020-11-21 17:03:54
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-21 17:33:12
 * @FilePath: \Exercise-CPlusPlus\174namespace.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

namespace D1
{
    void func(){};
    namespace D3
    {
        void func(){};
    }
} // namespace D1

namespace D2
{
    void func(){};
}

int main(int argc, char *argv[])
{
    using namespace D1;
    func();
    using namespace D2;
    // func();
    D2::func();
    D1::D3::func();
    return 0;
}