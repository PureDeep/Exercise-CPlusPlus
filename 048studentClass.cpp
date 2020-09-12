/*
 * @Author: PureDeep
 * @Date: 2020-09-11 18:14:43
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-11 18:23:01
 * @FilePath: \ExerciseC++\048studentClass.cpp
 */
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string stuName;
    int stuNum;

public:
    void setName(string name)
    {
        stuName = name;
    }

    void setStuNum(int num)
    {
        stuNum = num;
    }

    string getName()
    {
        return stuName;
    }

    int getStuNum()
    {
        return stuNum;
    }
};

int main()
{
    Student s;
    s.setName("HandsomeJack");
    s.setStuNum(20);
    cout << s.getName() << endl;
    cout << s.getStuNum() << endl;
    return 0;
}