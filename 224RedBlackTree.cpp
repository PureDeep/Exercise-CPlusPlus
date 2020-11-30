/*
 * @Author: PureDeep
 * @Date: 2020-11-29 21:10:58
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-30 18:30:05
 * @FilePath: \Exercise-CPlusPlus\224RedBlackTree.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
// #include "224RedBlackTree.h"

#include <iostream>
#include <vector>

using namespace std;

enum RBTreeColor
{
    Red,
    Black
};

class RBNode
{
public:
    int val;
    RBTreeColor color;
    RBNode *left;
    RBNode *right;
    RBNode *parent;
    RBNode(int x, RBTreeColor c, RBNode *l, RBNode *r, RBNode *p) : val(x), color(c), left(l), right(r), parent() {}
};

class RBTree
{
public:
    //根节点
    RBNode *root;
    //构造函数
    RBTree();
    //析构函数
    ~RBTree();
    //中序遍历
    void inOrderTrerves(RBNode *);
    //查找
    RBNode *findNode(RBNode *, int);
    //找最小值
    RBNode *findMin(RBNode *);
    //找最大值
    RBNode *findMax(RBNode *);
    //左旋
    void leftRotate(RBNode *&, RBNode *);
    //右旋
    void rightRotate(RBNode *&, RBNode *);
    //插入
    void insert(RBNode *&, RBNode *);
    //插入对应值
    void insert(RBNode *&, int);
    //插入修正
    void insertFixup(RBNode *&, RBNode *);
    //
    void transplant(RBNode *&, RBNode *, RBNode *);
    //删除
    void deleteNode(RBNode *&, RBNode *);
    //按值删除
    void deleteNode(RBNode *&, int);
    //删除修正
    void deleteFixup(RBNode *&, RBNode *);
};

RBTree::RBTree() : root(NULL)
{
    root = NULL;
}

RBNode *RBTree::findNode(RBNode *root, int x)
{
    if (root == NULL)
        return NULL;
    else if (root->val > x) //根节点值比关键字值大就去左子树找
    {
        return findNode(root->left, x);
    }
    else if (root->val < x) //根节点值比关键字值小就去右子树找
    {
        return findNode(root->right, x);
    }
    else //根节点值等于关键字值就直接返回根节点
    {
        return root;
    }
}

RBNode *RBTree::findMin(RBNode *root)
{
    if (root == NULL)
        return NULL;
    while (root->left != NULL)
        root = root->left;
    return root;
}

void RBTree::inOrderTrerves(RBNode *root)
{
    if (root != NULL)
    {
        RBTree::inOrderTrerves(root->left);
        cout << root->color << " " << root->val << endl;
        RBTree::inOrderTrerves(root->right);
    }
    else
    {
        cout << "root is NULL" << endl;
    }
}

void RBTree::leftRotate(RBNode *&root, RBNode *x)
{
    RBNode *tmp = x->right;
    x->right = tmp->left; //tmp的左子树设成x的右子树
    if (tmp->left != NULL)
    {
        tmp->left->parent = x;
    }
    tmp->parent = x->parent;
    if (x->parent == NULL)
    { //若x没有父母节点，则将根节点设为x的右子树
        root = tmp;
    }
    else if (x == x->parent->left)
    {
        x->parent->left = tmp;
    }
    else
    {
        x->parent->right = tmp;
    }
    tmp->left = x;
    x->parent = tmp;
}

void RBTree::rightRotate(RBNode *&root, RBNode *x)
{
    //设置tmp指向x的左孩子
    RBNode *tmp = x->left;
    //将tmp的右孩子设置为x的左孩子
    x->left = tmp->right;
    //如果tmp的右孩子不为空，则将tmp的右孩子的父节点设置为x
    if (tmp->right != NULL)
    {
        tmp->right->parent = x;
    }
    tmp->parent = x->parent;
    if (x->parent == NULL)
    { //如果x没有父母节点，则将根节点设为x的右子树
        root = tmp;
    }
    else if (x == x->parent->right) //如果x是x的父母的右孩子，则将tmp设为x的父母的右孩子
    {
        x->parent->right = tmp;
    }
    else
    {
        x->parent->left = tmp;
    }
    tmp->right = x;
    x->parent = tmp;
}

void RBTree::insert(RBNode *&root, RBNode *z)
{
    RBNode *y = NULL;
    RBNode *x = root;
    //将红黑树当成一棵二叉查找树，将节点添加到树中
    while (x != NULL)
    {
        y = x;
        if (z->val < x->val)
        {
            x = x->left;
        }
        else
        {
            x = x->right;
        }
    }
    z->parent = y;
    if (y == NULL)
    {
        root = z;
    }
    else if (z->val < y->val)
    {
        y->left = z;
    }
    else
    {
        y->right = z;
    }
    z->left = NULL;
    z->right = NULL;
    z->color = Red;
    RBTree::insertFixup(root, z);
}

void RBTree::insert(RBNode *&root, int x)
{
    RBNode *tmp = NULL;
    if ((tmp = new RBNode(x, Black, NULL, NULL, NULL)) == NULL)
    {
        return;
    }
    RBTree::insert(root, tmp);
}
//红黑树插入修正函数
void RBTree::insertFixup(RBNode *&root, RBNode *z)
{
    while (z->parent->color == Red)
    {
        if (z->parent == z->parent->parent->left)
        {
            RBNode *y = z->parent->parent->right;
            if (y->color == Red)
            {
                z->parent->color = Black;       // Case 1条件：叔叔节点是红色
                y->color = Black;               // Case 1条件：叔叔节点是红色
                z->parent->parent->color = Red; // Case 1条件：叔叔节点是红色
                z = z->parent->parent;          // Case 1条件：叔叔节点是红色
            }
            else if (z == z->parent->right)
            {
                z = z->parent;               // Case 2条件：叔叔是黑色，且当前节点是右孩子
                RBTree::leftRotate(root, z); // Case 2条件：叔叔是黑色，且当前节点是右孩子
            }
            z->parent->color = Black;                     // Case 3条件：叔叔是黑色，且当前节点是左孩子。
            z->parent->parent->color = Red;               // Case 3条件：叔叔是黑色，且当前节点是左孩子。
            RBTree::rightRotate(root, z->parent->parent); // Case 3条件：叔叔是黑色，且当前节点是左孩子。
        }
        else
        {
            RBNode *y = z->parent->parent->left;
            if (y->color == Red)
            {
                z->parent->color = Black;
                y->color = Black;
                z->parent->parent->color = Red;
                z = z->parent->parent;
            }
            else if (z == z->parent->left)
            {
                z = z->parent;
                RBTree::rightRotate(root, z);
            }
            z->parent->color = Black;
            z->parent->parent->color = Red;
            RBTree::leftRotate(root, z->parent->parent);
        }
    }
    root->color = Black;
}

void RBTree::transplant(RBNode *&root, RBNode *u, RBNode *v) //用节点v代替节点u
{
    if (u->parent == NULL)
    {
        root = v;
    }
    else if (u == u->parent->left)
    {
        u->parent->left = v;
    }
    else
    {
        u->parent->right = v;
    }
    v->parent = u->parent;
}
//删除结点
void RBTree::deleteNode(RBNode *&root, RBNode *z)
{
    RBNode *y = z;
    RBNode *x;
    RBTreeColor y_original_color = y->color;
    if (z->left == NULL)
    {
        x = z->right;
        RBTree::transplant(root, z, z->right);
    }
    else if (z->right == NULL)
    {
        x = z->left;
        RBTree::transplant(root, z, z->left);
    }
    else
    {
        //被删除节点左右孩子均不为空的情况
        //找到右子树最小的值，即被删除节点的后继
        y = RBTree::findMin(z->right);
        y_original_color = y->color;
        x = y->right;
        if (y->parent == z)
        {
            x->parent = y;
        }
        else
        {
            RBTree::transplant(root, y, y->right);
            y->right = z->right;
            y->right->parent = y;
        }
        RBTree::transplant(root, z, y);
        y->left = z->left;
        y->left->parent = y;
        y->color = z->color;
    }
    if (y_original_color == Black)
    {
        RBTree::deleteFixup(root, x);
    }
}

void RBTree::deleteNode(RBNode *&root, int x)
{
    RBNode *tmp;
    if ((tmp = RBTree::findNode(root, x)) != NULL)
    {
        RBTree::deleteNode(root, tmp);
    }
}

void RBTree::deleteFixup(RBNode *&root, RBNode *x)
{
    while (x != NULL && x->color == Black)
    {
        if (x == x->parent->left)
        {
            RBNode *w = x->parent->right;
            if (w->color == Red) // Case 1: x的兄弟w是红色的
            {
                w->color = Black;
                x->parent->color = Red;
                RBTree::leftRotate(root, x->parent);
                w = x->parent->right;
            }
            if (w->left->color == Black && w->right->color == Black)
            { // Case 2: x的兄弟w是黑色，且w的俩个孩子也都是黑色的
                w->color = Red;
                x = x->parent;
            }
            else if (w->right->color == Black)
            { // Case 3: x的兄弟w是黑色的；并且w的左孩子是红色的，右孩子任意颜色。
                w->left->color = Black;
                w->color = Red;
                RBTree::rightRotate(root, w);
                w = x->parent->right;
            }
            // Case 4: x的兄弟w是黑色的，并且w的右孩子是红色的，左孩子任意颜色。
            w->color = x->parent->color;
            x->parent->color = Black;
            w->right->color = Black;
            RBTree::leftRotate(root, x->parent);
            x = root->parent;
        }
        else
        {
            RBNode *w = x->parent->left;
            if (w->color == Red)
            {
                w->color = Black;
                x->parent->color = Red;
                RBTree::rightRotate(root, x->parent);
                w = x->parent->left;
            }
            if (w->right->color == Black && w->left->color == Black)
            {
                w->color = Red;
                x = x->parent;
            }
            else if (w->left->color == Black)
            {
                w->right->color = Black;
                w->color = Red;
                RBTree::leftRotate(root, w);
                w = x->parent->left;
            }
            w->color = x->parent->color;
            x->parent->color = Black;
            w->left->color = Black;
            RBTree::rightRotate(root, x->parent);
            x = root->parent;
        }
    }
}

int main(int argc, char *argv[])
{
    RBTree *t = new RBTree();
    int a[] = {1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int a_len = (sizeof(a) / sizeof(a[0]));
    for (int i = 0; i < a_len; i++)
    {
        t->insert(t->root, a[i]);
        cout << "Yes" << endl;
    }
    t->inOrderTrerves(t->root);
    return 0;
}