/*
 * @Author: PureDeep
 * @Date: 2020-08-26 16:45:33
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-28 17:14:05
 * @FilePath: \C++\ExerciseC++\035ͨѶ¼����.cpp
 */
#include <iostream>
#include <string>

#define MAX 1000

using namespace std;

struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

struct AddressBooks
{
    /* data */
    struct Person personArray[MAX];
    int m_Size;
};

//show menu
void showMenu()
{
    cout << "*************************" << endl;
    cout << "***** 1�������ϵ�� *****" << endl;
    cout << "***** 2����ʾ��ϵ�� *****" << endl;
    cout << "***** 3��ɾ����ϵ�� *****" << endl;
    cout << "***** 4��������ϵ�� *****" << endl;
    cout << "***** 5���޸���ϵ�� *****" << endl;
    cout << "***** 6�������ϵ�� *****" << endl;
    cout << "***** 0���˳�ͨѶ¼ *****" << endl;
    cout << "*************************" << endl;
}

void addPerson(AddressBooks *abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "ͨѶ¼�������޷����" << endl;
        return;
    }
    else
    {
        string name;
        cout << "������������" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        cout << "�������Ա�" << endl;
        cout << "1----��" << endl;
        cout << "2----Ů" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "������������������" << endl;
        }

        cout << "���������䣺" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        cout << "�������ֻ��ţ�" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        cout << "������סַ��" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        abs->m_Size++;
        cout << "��ӳɹ�" << endl;

        system("pause");
        system("cls");
    }
}

void showPerson(AddressBooks *abs)
{
    if (abs->m_Size == 0)
    {
        cout << "��ǰ��¼Ϊ��" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "������" << abs->personArray[i].m_Name << "\t"
                 << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
            // if (abs->personArray[i].m_Sex == 1)
            // {
            //     cout << "��"
            //          << "\t";
            // }
            // else
            // {
            //     cout << "Ů"
            //          << "\t";
            // }
            cout << "���䣺" << abs->personArray[i].m_Age << "\t"
                 << "�ֻ��ţ�" << abs->personArray[i].m_Phone << "\t"
                 << "סַ��" << abs->personArray[i].m_Addr << endl;
        }
    }
}

int isExist(AddressBooks *abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->personArray[i].m_Name == name)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int select = 0;

    AddressBooks abs;
    abs.m_Size = 0;

    while (true)
    {
        //use menu

        showMenu();

        cin >> select;

        switch (select)
        {
        case 1:
            addPerson(&abs);
            break;
        case 2:
            showPerson(&abs);
            break;
        case 3:
        {
            cout << "������Ҫɾ���˵�������" << endl;
            string name;
            cin >> name;
            if (isExist(&abs, name) == -1)
            {
                cout << "���޴���" << endl;
            }
            else
            {
                cout << "�ҵ�����" << endl;
            }
        }
        break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 0:
            cout << "----��лʹ��----" << endl;
            return 0;
            break;
        default:
            break;
        }
    }
}