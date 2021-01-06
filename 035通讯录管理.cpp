/*
 * @Author: PureDeep
 * @Date: 2020-08-26 16:45:33
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-01 12:21:25
 * @FilePath: \C++\ExerciseC++\035通讯录管理.cpp
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
    cout << "***** 1、添加联系人 *****" << endl;
    cout << "***** 2、显示联系人 *****" << endl;
    cout << "***** 3、删除联系人 *****" << endl;
    cout << "***** 4、查找联系人 *****" << endl;
    cout << "***** 5、修改联系人 *****" << endl;
    cout << "***** 6、清空联系人 *****" << endl;
    cout << "***** 0、退出通讯录 *****" << endl;
    cout << "*************************" << endl;
}

void addPerson(AddressBooks *abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        cout << "请输入性别：" << endl;
        cout << "1----男" << endl;
        cout << "2----女" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }

        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        cout << "请输入手机号：" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        cout << "请输入住址：" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        abs->m_Size++;
        cout << "添加成功" << endl;

        system("pause");
        system("cls");
    }
}

void showPerson(AddressBooks *abs)
{
    if (abs->m_Size == 0)
    {
        cout << "当前记录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "姓名：" << abs->personArray[i].m_Name << "\t"
                 << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
            // if (abs->personArray[i].m_Sex == 1)
            // {
            //     cout << "男"
            //          << "\t";
            // }
            // else
            // {
            //     cout << "女"
            //          << "\t";
            // }
            cout << "年龄：" << abs->personArray[i].m_Age << "\t"
                 << "手机号：" << abs->personArray[i].m_Phone << "\t"
                 << "住址：" << abs->personArray[i].m_Addr << endl;
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

void deletePerson(AddressBooks *abs)
{
    cout << "请输入您要删除的联系人：" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size--;
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }

    system("pause");
    system("cls");
}

void findPerson(AddressBooks *abs)
{
    cout << "请输入您要查找的人姓名：" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1)
    {
        cout << "姓名：" << abs->personArray[ret].m_Name << "\t"
             << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
        // if (abs->personArray[i].m_Sex == 1)
        // {
        //     cout << "男"
        //          << "\t";
        // }
        // else
        // {
        //     cout << "女"
        //          << "\t";
        // }
        cout << "年龄：" << abs->personArray[ret].m_Age << "\t"
             << "手机号：" << abs->personArray[ret].m_Phone << "\t"
             << "住址：" << abs->personArray[ret].m_Addr << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("cls");
}

void modifyPerson(AddressBooks *abs)
{
    cout << "请输入要修改信息的人的姓名：" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1)
    {
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;

        cout << "请输入性别：" << endl;
        cout << "1----男" << endl;
        cout << "2----女" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[ret].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }

        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[ret].m_Age = age;

        cout << "请输入手机号：" << endl;
        string phone;
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;

        cout << "请输入住址：" << endl;
        string address;
        cin >> address;
        abs->personArray[ret].m_Addr = address;
    }
    else
    {
        cout << "查无此人" << endl;
    }

    system("pause");
    system("cls");
}

void cleanPerson(AddressBooks *abs)
{
    abs->m_Size = 0;

    cout << "清空完成" << endl;

    system("pause");
    system("cls");
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
            // cout << "请输入要删除人的姓名：" << endl;
            // string name;
            // cin >> name;
            // if (isExist(&abs, name) == -1)
            // {
            //     cout << "查无此人" << endl;
            // }
            // else
            // {
            //     cout << "找到此人" << endl;
            // }
        }
            deletePerson(&abs);
            break;
        case 4:
            findPerson(&abs);
            break;
        case 5:
            modifyPerson(&abs);
            break;
        case 6:
            cleanPerson(&abs);
            break;
        case 0:
            cout << "----感谢使用----" << endl;
            return 0;
            break;
        default:
            break;
        }
    }
}