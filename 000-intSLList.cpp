//************************  intSLList.cpp  **************************

#include <iostream>
#include "000-intSLList.h"

// IntSLList::~IntSLList()
// {
//     for (IntSLLNode *p; !isEmpty();) //遍历一个一个的释放空间
//     {
//         p = head->next;
//         delete head;
//         head = p;
//     }
// }

// void IntSLList::addToHead(int el)//头插法
// {
//     head = new IntSLLNode(el, head);
//     if (tail == 0) //如果tail为空指针，则将tail指向第一个head，随着数据增加，tail会始终指向最后一个元素
//         tail = head;
// }

// void IntSLList::addToTail(int el)//尾插法
// {
//     if (tail != 0)
//     { // if list not empty;
//         tail->next = new IntSLLNode(el);
//         tail = tail->next;
//     }
//     else
//         head = tail = new IntSLLNode(el);
// }

// int IntSLList::deleteFromHead()
// {
//     int el = head->info;
//     IntSLLNode *tmp = head;
//     if (head == tail) // if only one node on the list;
//         head = tail = 0;
//     else
//         head = head->next;
//     delete tmp;
//     return el;
// }

// int IntSLList::deleteFromTail()
// {
//     int el = tail->info;
//     if (head == tail)
//     { // if only one node on the list;
//         delete head;
//         head = tail = 0;
//     }
//     else
//     {                    // if more than one node in the list,
//         IntSLLNode *tmp; // find the predecessor of tail;
//         for (tmp = head; tmp->next != tail; tmp = tmp->next)
//             ;
//         delete tail;
//         tail = tmp; // the predecessor of tail becomes tail;
//         tail->next = 0;
//     }
//     return el;
// }

// void IntSLList::deleteNode(int el)
// {
//     if (head != 0) // if non-empty list;
//         if (head == tail && el == head->info)
//         {                // if only one
//             delete head; // node on the list;
//             head = tail = 0;
//         }
//         else if (el == head->info)
//         { // if more than one node on the list
//             IntSLLNode *tmp = head;
//             head = head->next;
//             delete tmp; // and old head is deleted;
//         }
//         else
//         { // if more than one node in the list
//             IntSLLNode *pred, *tmp;
//             for (pred = head, tmp = head->next;  // and a non-head node
//                  tmp != 0 && !(tmp->info == el); // is deleted;
//                  pred = pred->next, tmp = tmp->next)
//                 ;
//             if (tmp != 0)
//             {
//                 pred->next = tmp->next;
//                 if (tmp == tail)
//                     tail = pred;
//                 delete tmp;
//             }
//         }
// }

// bool IntSLList::isInList(int el) const
// {
//     IntSLLNode *tmp;
//     for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next)
//         ;
//     return tmp != 0;
// }

// void IntSLList::printAll() const
// {
//     for (IntSLLNode *tmp = head; tmp != 0; tmp = tmp->next)
//         cout << tmp->info << " ";
//     cout << endl;
// }

//析构函数,依次删除释放元素空间
IntSLList::~IntSLList()
{
    for (IntSLLNode *p; !isEmpty();)
    {
        p = head->next;
        delete head;
        head = p;
    }
}

//添加到头部
void IntSLList::addToHead(int el)
{
    head = new IntSLLNode(el, head);
    if (tail == 0)
    {
        tail = head;
    }
}

void IntSLList::addToTail(int el) //添加到尾部
{
    if (tail != 0)
    {
        tail->next = new IntSLLNode(el);
        tail = tail->next;
    }
    else
    {
        tail = head = new IntSLLNode(el);
    }
}

int IntSLList::deleteFromHead()
{
    int el = head->info;
    IntSLLNode *temp = head;
    if (head == tail)
    {
        head = tail = 0;
    }
    else
        head = head->next;
    delete temp;
    return el;
}

int IntSLList::deleteFromTail() //删除尾部节点
{
    int el = tail->info;
    if (head == tail)
    {
        delete head;
        head = tail = 0;
    }
    else
    {
        IntSLLNode *temp;
        for (temp = head; temp->next != tail; temp = temp->next)
        {
        };
        delete tail;
        tail = temp;
        tail->next = 0;
    }
    return el;
}

void IntSLList::deleteNode(int el)
{
    if (head != 0)
    {
        if (head == tail && el == head->info)
        {
            delete head;
            head = tail = 0;
        }
        else if (el == head->info)
        {
            IntSLLNode *tmp = head;
            head = head->next;
            delete tmp;
        }
        else
        {
            IntSLLNode *pred, *tmp;
            for (pred = head, tmp = head->next;
                 tmp != 0 && !(tmp->info == el);
                 pred = pred->next, tmp = tmp->next)
                ;
            if (tmp != 0)
            {
                pred->next = tmp->next;
                if (tmp == tail)
                    tail = pred;
                delete tmp;
            }
        }
    }
}

bool IntSLList::isInList(int el) const
{
    IntSLLNode *tmp;
    for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next)
        ;
    return tmp != 0;
}

void IntSLList::printAll() const
{
    for (IntSLLNode *tmp = head; tmp != 0; tmp = tmp->next)
        cout << tmp->info << " ";
    cout << endl;
}