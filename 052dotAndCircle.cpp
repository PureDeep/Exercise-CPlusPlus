/*
 * @Author: PureDeep
 * @Date: 2020-09-11 21:02:25
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-11 22:13:49
 * @FilePath: \ExerciseC++\052dotAndCircle.cpp
 */
#include <iostream>

using namespace std;

class Point{
private:
    int m_X;
    int m_Y;

public:
    void setX(int x){
        m_X = x;
    }

    void setY(int y){
        m_Y = y;
    }

    int getX(){
        return m_X;
    }

    int getY(){
        return m_Y;
    }
};

class Circle{
private:
    int m_R;
    // int m_X;
    // int m_Y;
    Point m_Center;
public:
    void setCenter(int x, int y){
        m_Center.setX(x);
        m_Center.setY(y);
    }

    void setRad(int r){
        m_R = r;
    }

    int getRad() const{
        return m_R;
    }

    Point getCenter() const{
        return m_Center;
    }
};

void isInCircle(Circle &c, Point &p){

}


int main()
{

   return 0;
}