/*
 * @Author: PureDeep
 * @Date: 2020-11-29 17:49:56
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-30 18:39:01
 * @FilePath: \Exercise-CPlusPlus\223BST.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <vector>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode *insertNode(TreeNode *, int); //插入关键字
    TreeNode *findNode(TreeNode *, int);   //寻找关键字
    TreeNode *findMax(TreeNode *);         //寻找最大值并返回节点
    TreeNode *findMin(TreeNode *);         //寻找最小值并返回节点
    void inOrderTrerves(TreeNode *);       //中序遍历二叉查找树
    TreeNode *deleteNode(TreeNode *, int);
    void inOrderTraverse(TreeNode *, vector<int> &);
    bool isValidBST(TreeNode *);
};
//插入
TreeNode *TreeNode::insertNode(TreeNode *root, int x)
{ //将关键字插入应该在的位置
    if (root == NULL)
    {
        TreeNode *tmp = new TreeNode(x);
        return tmp;
    }
    else
    {
        if (x < root->val)
        {
            root->left = insertNode(root->left, x);
        }
        else
        {
            root->right = insertNode(root->right, x);
        }
        return root;
    }
}
//查询
TreeNode *TreeNode::findNode(TreeNode *root, int x)
{ //查找一个具有给定关键字的节点
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
//寻找最大值
TreeNode *TreeNode::findMax(TreeNode *root)
{
    while (root->right)
    {
        root = root->right;
    }
    return root;
}
//寻找最小值
TreeNode *TreeNode::findMin(TreeNode *root)
{
    while (root->left)
    {
        root = root->left;
    }
    return root;
}
//中序遍历
void TreeNode::inOrderTrerves(TreeNode *root)
{ //中序遍历二叉查找树
    if (root != NULL)
    {
        inOrderTrerves(root->left);
        cout << root->val << " ";
        inOrderTrerves(root->right);
    }
}
//删除节点
TreeNode *TreeNode::deleteNode(TreeNode *root, int x)
{ //删除指定节点
    TreeNode *tmp;
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->val > x)
    {
        root->left = deleteNode(root->left, x);
    }
    else if (root->val < x)
    {
        root->right = deleteNode(root->right, x);
    }
    else
    {
        if (root->left && root->right)
        {
            tmp = TreeNode::findMin(root->right);
            root->val = tmp->val;
            root->right = deleteNode(root->right, tmp->val);
        }
        else
        {
            tmp = root;
            if (root->left == NULL)
            {
                root = root->right;
            }
            else if (root->right == NULL)
            {
                root = root->left;
            }
            delete tmp;
        }
    }
    return root;
}
//重载中序遍历，将中序遍历结果存入数组
void TreeNode::inOrderTraverse(TreeNode *root, vector<int> &s)
{ //递归 中序遍历并输出结果到s
    if (root != 0)
    {
        inOrderTraverse(root->left, s);
        s.push_back(root->val);
        inOrderTraverse(root->right, s);
    }
}
//验证二叉查找树
bool TreeNode::isValidBST(TreeNode *root)
{
    if (root == 0)
    {
        return true;
    }
    vector<int> s;
    inOrderTraverse(root, s);
    int size = s.size();
    for (int i = 0; i < size - 1; ++i)
    { //检测中序遍历输出的数组是否单调递增
        if (s[i] >= s[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    TreeNode *s = new TreeNode(2);
    s->insertNode(s, 5);
    s->insertNode(s, 9);
    s->insertNode(s, 12);
    s->insertNode(s, 18);
    s->insertNode(s, 15);
    s->insertNode(s, 17);
    s->insertNode(s, 19);
    s->insertNode(s, 13);
    s->inOrderTrerves(s);
    cout << endl;

    s->deleteNode(s, 13);
    s->inOrderTrerves(s);
    cout << endl;

    s->insertNode(s, 13);
    s->inOrderTrerves(s);
    cout << endl;

    cout << s->isValidBST(s) << endl;

    TreeNode *t = new TreeNode(5);
    t->insertNode(t, 1);
    t->insertNode(t, 4);
    t->insertNode(t, 3);
    t->insertNode(t, 6);

    cout << t->isValidBST(s) << endl;

    return 0;
}