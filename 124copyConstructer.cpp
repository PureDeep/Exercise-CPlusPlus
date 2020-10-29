/*
 * @Author: PureDeep
 * @Date: 2020-10-28 09:55:14
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-28 10:02:43
 * @FilePath: \Exercise-CPlusPlus\124copyConstructer.cpp
 */
#include <iostream>

using namespace std;

class NameList
{
public:
    NameList()
    {
        size = 0;
        p = 0;
    }
    NameList(const NameList &d)
    {
        p = nullptr;
        copyInto(d);
    }
    void copyInto(const NameList &d)
    {
        delete[] p;
        if (!d.p)
        {
            p = new string[d.size];
            for (int i = 0; i < d.size; i++)
            {
                p[i] = d.p[i];
            }
        }
        else
        {
            p = 0;
            size = 0;
        }
    }

private:
    int size;
    string *p;
};

int main()
{

    return 0;
}