/*
 * @Author: PureDeep
 * @Date: 2020-11-25 17:06:04
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 17:25:13
 * @FilePath: \Exercise-CPlusPlus\202templateStack.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

template <class T>
class Stack
{
public:
    enum
    {
        defaultStack = 50,
        emptyStack = -1
    };
    Stack()
    {
        size = defaultStack;
        allocate();
    }
    Stack(int);
    ~Stack() { delete[] elements; }
    void push(const T &);
    T pop();
    T topNoPop() const;
    bool empty() const { return top <= emptyStack; }
    bool full() const { return top + 1 >= size; }

private:
    T *elements;
    int top;
    int size;
    void allocate()
    {
        elements = new T[size];
        top = emptyStack;
    }
    void msg(const char *m) const
    {
        cout << "***" << m << "***" << endl;
    }
    friend ostream &operator<<(ostream &, const Stack<T> &);
};

template <class T>
Stack<T>::Stack(int s)
{
    if (s < 0)
    {
        s *= -1;
    }
    else if (s == 0)
    {
        s = defaultStack;
    }
    size = s;
    allocate();
}

template <class T>
void Stack<T>::push(const T &e)
{
    assert(!full());
    if (!full())
    {
        elements[++top] = e;
    }
    else
    {
        msg("Stack Full!");
    }
}

template <class T>
T Stack<T>::pop()
{
    assert(!empty());
    if (!empty())
    {
        return elements[top--];
    }
    else
    {
        msg("Stack Empty!");
        T dummy_value = 0;
        return dummy_value;
    }
}

template <class T>
T Stack<T>::topNoPop() const
{
    assert(top > emptyStack);
    if (!empty())
    {
        return elements[top];
    }
    else
    {
        msg("Stack Empty!");
        T dummy_value = 0;
        return dummy_value;
    }
}

template <class T>
ostream &operator<<(ostream &os, const Stack<T> &s)
{
    s.msg("Stack contents");
    int t = s.top;
    while (t > s.empty)
}