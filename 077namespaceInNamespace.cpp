/*
 * @Author: PureDeep
 * @Date: 2020-09-25 12:42:52
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-25 12:57:19
 * @FilePath: \Exercise-CPlusPlus\077namespaceInNamespace.cpp
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