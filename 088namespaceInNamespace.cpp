/*
 * @Author: PureDeep
 * @Date: 2020-10-15 17:35:11
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 17:36:30
 * @FilePath: \Exercise-CPlusPlus\088namespaceInNamespace.cpp
 */
#include <iostream>

using namespace std;

namespace first
{
    void f()
    {
        cout << "First" << endl;
    }
    namespace second
    {
        void f()
        {
            cout << "Second" << endl;
        }
    } // namespace second
} // namespace first

using namespace first::second;

int main()
{
    f();
    return 0;
}