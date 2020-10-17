/*
 * @Author: PureDeep
 * @Date: 2020-10-16 19:35:22
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-16 20:25:23
 * @FilePath: \Exercise-CPlusPlus\104elephants.cpp
 */
#include <iostream>

using namespace std;

struct Elephant
{
    string name;
    Elephant *next;
};

void print_elephant(const Elephant *ptr);
Elephant *get_elephant();
void free_list(const Elephant *ptr);

int main()
{
    Elephant *start;
    start = get_elephant();
    print_elephant(start);
    free_list(start);
    return 0;
}

Elephant *get_elephant()
{
    Elephant *current, *first;
    int response;
    current = first = new Elephant;
    cout << "\nName: ";
    cin >> current->name;
    cout << "\nNext name? ";
    cin >> response;
    while (response == 1)
    {
        current = current->next = new Elephant;
        cout << "\nName: ";
        cin >> current->name;
        cout << "\nNext name? ";
        cin >> response;
    }
    current->next = NULL;
    return first;
}

void print_elephant(const Elephant *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->name << endl;
        ptr = ptr->next;
    }
}

void free_list(const Elephant *ptr)
{
    const Elephant *temp_ptr;
    while (ptr != NULL)
    {
        temp_ptr = ptr->next;
        delete ptr;
        ptr = temp_ptr;
    }
}