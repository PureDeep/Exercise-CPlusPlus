/*
 * @Author: PureDeep
 * @Date: 2020-11-26 08:08:29
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-26 08:23:52
 * @FilePath: \Exercise-CPlusPlus\214dateOverride.cpp
 */
#include <iostream>
using namespace std;

class Date
{
public:
    int m_Year, m_Month, m_Day;

    Date(int year = 0, int month = 0, int day = 0)
    {
        m_Year = year;
        m_Month = month;
        m_Day = day;
    }
    Date operator++();
    Date operator++(int);
    friend ostream &operator<<(ostream &, const Date);
};

Date Date::operator++()
{
    m_Day++;
    if (m_Day == 31)
    {
        m_Day = 1;
        m_Month++;
        if (m_Month == 12)
        {
            m_Month = 1;
            m_Year++;
        }
    }
    return *this;
}

Date Date::operator++(int)
{
    Date tmp = *this;
    (*this)++;
    return tmp;
}

ostream &operator<<(ostream &os, const Date &date)
{
    cout << "Year: " << date.m_Year << " Month: " << date.m_Month << " Day: " << date.m_Day << endl;
}