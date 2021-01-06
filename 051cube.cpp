#include <iostream>

using namespace std;

class cube
{
private:
    /* data */
    int m_L;
    int m_H;
    int m_W;

public:
    // cube(/* args */);
    // ~cube();
    void setL(int l)
    {
        m_L = l;
    }

    void setH(int h)
    {
        m_H = h;
    }

    void setW(int w)
    {
        m_W = w;
    }

    int getL()
    {
        return m_L;
    }

    int getH()
    {
        return m_H;
    }

    int getW()
    {
        return m_W;
    }

    int getArea()
    {
        return m_L * m_H * 2 + m_L * m_W * 2 + m_H * m_W * 2;
    }

    int getVolume()
    {
        return m_L * m_H * m_W;
    }
};

bool isSame(cube &c1, cube &c2)
{
    if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1.getW() == c2.getW())
        return true;
    else
        return false;
}

int main()
{
    cube c1;
    cube c2;
    c1.setW(10);
    c1.setH(20);
    c1.setL(30);
    cout << "c1 area = " << c1.getArea() << endl;
    cout << "c1 volume = " << c1.getVolume() << endl;
    c2.setW(10);
    c2.setH(3);
    c2.setL(30);
    cout << (isSame(c1,c2)?"c1 is same as c2":"c1 is not same as c2") << endl;
    return 0;
}