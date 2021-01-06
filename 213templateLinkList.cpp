/*
 * @Author: PureDeep
 * @Date: 2020-11-25 23:10:07
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-26 13:19:58
 * @FilePath: \Exercise-CPlusPlus\213templateLinkList.cpp
 */
template <class T>
class LNode
{
public:
    LNode *next;
    T info;
    LNode() { next = 0; }
    LNode(T &el, LNode *p = 0)
    {
        info = el;
        next = p;
    }
};

template <class T>
class LList
{
public:
    LNode<T> *head, *tail;
    LList()
    {
        head = 0;
        tail = 0;
    }
    LList(const LList &l)
    {
        LNode<T> *tmp;
        for (tmp = l.head; tmp != 0; tmp = tmp->next)
        {
            this->addToTail(tmp->info);
        }
        delete tmp;
    }
    ~LList()
    {
        for (LNode<T> *p; !isEmpty();)
        {
            p = head->next;
            delete head;
            head = p;
        }
    }
    int isEmpty()
    {
        if (head == 0)
            return 1;
    }
    void addToHead(const T &el)
    {
        tail = new LNode<T>(el, head);
        if (tail == 0)
        {
            tail = head;
        }
    }
    void addToTail(const T &el)
    {
        if (tail != 0)
        {
            tail->next = new LNode<T>(el);
            tail = tail->next;
        }
        else
        {
            tail = head = new LNode<T>(el);
        }
    }
    T deleteFromHead();
    T deleteFromTail();
    void deleteNode(T);
    void deleteDepulicate(const LList &);
    LList operator-(const LList &);
};

template <class T>
T LList<T>::deleteFromHead()
{
    T el = head->info;
    LNode<T> *tmp = head;
    if (head == tail)
    {
        head = tail = 0;
    }
    else
    {
        head = tmp->next;
    }
    delete tmp;
    return el;
}

template <class T>
T LList<T>::deleteFromTail()
{
    T el = tail->info;
    if (head == tail)
    {
        delete head;
        head = tail = 0;
    }
    else
    {
        LNode<T> *tmp;
        for (tmp = head; tmp->next != tail; tmp = tmp->next)
        {
        }
        delete tail;
        tail = tmp;
        tail->next = 0;
    }
    return el;
}

template <class T>
void LList<T>::deleteNode(T el)
{
    if (head != 0)
    {
        if (head == tail && el == tail->info)
        {
            delete head;
            head = tail = 0;
        }
        else if (el == head->info)
        {
            LNode<T> *tmp = head;
            head = head->next;
            delete tmp;
        }
        else
        {
            LNode<T> *pred, *tmp;
            for (pred = head, tmp = head->next; tmp->info != el && tmp != 0; pred = pred->next, tmp = tmp->next)
                ;
            if (tmp != 0)
            {
                pred->next = tmp->next;
                if (tmp == tail)
                {
                    tail = pred;
                }
            }
            delete tmp;
        }
    }
}

template <class T>
void LList<T>::deleteDepulicate(const LList<T> &t)
{
    LNode<T> *tmp;
    for (tmp = t.head; tmp != 0; tmp = tmp->next)
    {
        this->deleteNode(tmp->info);
    }
    delete tmp;
}

template <class T>
LList<T> LList<T>::operator-(const LList<T> &l)
{
    LNode<T> *tmp;
    for (tmp = l.head; tmp != 0; tmp = tmp->next)
    {
        this->deleteNode(tmp->info);
    }
    return *this;
}