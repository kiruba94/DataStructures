#ifndef TREE_SEARCH
#define TREE_SEARCH
#include "node.hh"
using namespace std;
template <typename T>
bool BFS_TreeSearch(node<T> *root, T value)
{
    if (root == nullptr)
        return false;
    queue<node<T> *> nodeQueue;
    nodeQueue.push(root);
    while (!nodeQueue.empty())
    {
        node<T> *current = nodeQueue.front();
        nodeQueue.pop();

        if (current->val == value)
        {
            return true;
        }
        else
        {
            if (current->left != nullptr)
                nodeQueue.push(current->left);
            if (current->right != nullptr)
                nodeQueue.push(current->right);
        }
    }
    return false;
}
template <typename T>
bool DFS_TreeSearch(node<T> *root, T value)
{
    bool ret = false;
    if (root == nullptr)
        return false;
    if (root->val == value)
        return true;
    if (root->left != nullptr)
        ret = ret || DFS_TreeSearch(root->left, value);
    if (root->right != nullptr)
        ret = ret || DFS_TreeSearch(root->right, value);
    return ret;
}
#endif