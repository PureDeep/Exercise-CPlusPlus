/*
 * @Author: PureDeep
 * @Date: 2020-08-24 18:15:42
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-24 19:03:23
 * @FilePath: \C++\ExerciseC++\033�ṹ�尸��1.cpp
 */
#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

// void inputTeacher(Teacher *t);
// void inputStudent(Student *s, int i);
// void outputTeacher(const Teacher *t);
// void outputStudent(const Student *s, int i);

struct Student
{
    string sName;
    int score;
};

struct Teacher
{
    string tName;
    Student sArray[5];
};

void allocateTeacher(Teacher tArray[], int len)
{
    string NameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += NameSeed[i];

        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += NameSeed[j];

            int random = rand() % 60 + 40;
            tArray[i].sArray[j].score = random;
        }
    }
}

void inputStudent(Student *s, int i)
{
    cout << "�����" << i << "��ѧ����������" << endl;
    cin >> s->sName;
    cout << "�����" << i << "��ѧ���ķ�����" << endl;
    cin >> s->score;
}

void inputTeacher(Teacher *t, int i)
{
    cout << "�����" << i << "����ʦ��������" << endl;
    cin >> t->tName;
    for (int i = 0; i < 5; i++)
    {
        inputStudent(&t->sArray[i], i + 1);
    }
}

void outputStudent(const Student *s, int i)
{
    cout << "\t�ڸ�" << i << "ѧ���������ǣ�" << s->sName << endl;
    cout << "\t�ڸ�" << i << "ѧ���������ǣ�" << s->score << endl;
}

void outputTeacher(const Teacher *t)
{
    cout << "��ʦ�������ǣ�" << t->tName << endl;
    for (int i = 0; i < 5; i++)
    {
        outputStudent(&t->sArray[i], i + 1);
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    Teacher tArray[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     inputTeacher(&tArray[i], i + 1);
    // }
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateTeacher(tArray, len);
    for (int i = 0; i < 3; i++)
    {
        outputTeacher(&tArray[i]);
    }
    return 0;
}