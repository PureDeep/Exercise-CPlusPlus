/*
 * @Author: PureDeep
 * @Date: 2020-11-29 21:12:22
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-29 22:29:46
 * @FilePath: \Exercise-CPlusPlus\224RedBlackTree.h
 */
#ifndef __224_RED_BLACK_TREE_H__
#define __224_RED_BLACK_TREE_H__

#include <iostream>

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
    RBNode(int x, RBTreeColor c, RBNode *l, RBNode *r, RBNode *p) : val(x), color(c), left(l), right(r), parent(p) {}
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
    void inOrderTrerves();
    //查找
    RBNode *find(int);
    //找最小值
    RBNode *findMin();
    //找最大值
    RBNode *findMax();
    //左旋
    void leftRotate(RBNode *&, RBNode *);
    //右旋
    void rightRotate(RBNode *&, RBNode *);
    //插入
    void insert(RBNode *&, RBNode *);
    //插入修正
    void insertFixup(RBNode *&, RBNode *);
    //删除
    void deleteNode(RBNode *&, RBNode *);
    //删除修正
    void deleteFixup(RBNode *&, RBNode *);
};

#endif //__224_RED_BLACK_