/*
 * @Author: PureDeep
 * @Date: 2020-11-25 21:29:46
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 23:09:21
 * @FilePath: \Exercise-CPlusPlus\212doubleLinkList.cpp
 */
template <class T>
class DLLNode
{
public:
    DLLNode *next, *prev;
    T info;
    DLLNode() { next = prev = 0; }
    DLLNode(const T &el, DLLNode *n = 0, DLLNode *p = 0)
    {
        info = el;
        next = n;
        prev = p;
    }
};

template <class T>
class DLList
{
    DLLNode<T> *head, *tail;

public:
    DLList()
    {
        head = tail = 0;
    }
    void addToTail(const T &);
    T deleteFromTail();
    void deleteDepulicate(DLList &, const DLList &);
};

template <class T>
void DLList<T>::addToTail(const T &value)
{
    if (tail != 0)
    {
        tail = new DLLNode<T>(value, 0, tail);
        tail->prev->next = tail;
    }
    else
    {
        head = tail = new DLLNode<T>(value);
    }
}

template <class T>
T DLList<T>::deleteFromTail()
{
    T el = tail->info;
    if (head == tail)
    {
        delete head;
        head = tail = 0;
    }
    else
    {
        tail = tail->prev;
        delete tail->next;
        tail->next = 0;
    }
    return el;
}

template <class T>
void DLList<T>::deleteDepulicate(DLList<T> &s, const DLList<T> &t)
{
    DLLNode<T> *p1, *p2;
    p1 = s->head;
    p2 = t->head;
}