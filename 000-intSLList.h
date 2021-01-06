/*
 * @Author: PureDeep
 * @Date: 2020-10-12 22:00:13
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-18 19:17:50
 * @FilePath: \Exercise-CPlusPlus\000-intSLList.h
 */
//********intSLList.h********
//Singly-Linked list class to store integers

#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntSLLNode
{
public:
    IntSLLNode() //构建函数
    {
        next = 0;
    }
    // IntSLLNode(int el, IntSLLNode *ptr = 0)
    // {
    //     info = el;
    //     next = ptr;
    // }
    IntSLLNode(int el, IntSLLNode *ptr = 0) : info(el), next(ptr) {}
    int info;
    IntSLLNode *next;
};

class IntSLList
{
public:
    IntSLList()
    {
        head = tail = 0;
    }
    ~IntSLList();
    int isEmpty()
    {
        return head == 0;
    }
    void addToHead(int);
    void addToTail(int);
    int deleteFromHead();
    int deleteFromTail();
    void deleteNode(int);
    bool isInList(int el) const;
    void IntSLList::printAll() const;

private:
    IntSLLNode *head, *tail;
};

#endif //INT_LINKED_LIST