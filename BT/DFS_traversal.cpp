#ifndef DFS_TRANSVERSAL
#define DFS_TRANSVERSAL
#include "node.hh"
using namespace std;

template <class T>
void DFS_using_stack(node<T> *root, T &out)
{
    stack<node<T> *> nodeStack;
    if (root == nullptr)
    {
        out = "";
        return;
    }
    nodeStack.push(root);

    while (!nodeStack.empty())
    {
        node<T> *current = nodeStack.top();
        nodeStack.pop();
        if (current->right != nullptr)
        {
            nodeStack.push(current->right);
        }
        if (current->left != nullptr)
        {
            nodeStack.push(current->left);
        }
        out = out +current->val +" ";
    }
}
template<class T>
void DFS_using_recursion(node<T> *root, T &out)
{
    if (root == nullptr)
    {
        out = "";
        return;
    }
    out = out +root->val +" ";
    if (root->left != nullptr)
    {
        DFS_using_recursion(root->left, out);
    }
    if (root->right != nullptr)
    {
        DFS_using_recursion(root->right, out);
    }
}
#endif