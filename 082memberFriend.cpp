/*
 * @Author: PureDeep
 * @Date: 2020-09-29 17:21:20
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-29 19:50:45
 * @FilePath: \Exercise-CPlusPlus\082memberFriend.cpp
 */
#include <iostream>
#include <string>

using namespace std;

class Building
{
    friend void GoodGay::visit();

public:
    string m_SittingRoom;

private:
    string m_BedRoom;
};

class GoodGay
{
public:
    GoodGay();
    void visit();
    void visit2();
    Building *building;
};

Building::Building()
{
    m_SittingRoom = "SittingRoom";
    m_BedRoom = "BedRoom";
}

GoodGay::GoodGay()
{
    building = new Building();
}

void GoodGay::visit()
{
    cout << "visit" << building->m_SittingRoom << endl;
}

void GoodGay::visit2()
{
}

void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{

    return 0;
}