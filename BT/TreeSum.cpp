#ifndef TREE_SUM
#define TREE_SUM
#include "node.hh"
using namespace std;

int TreeSum_DFS(node<int> *root)
{
    if (root == nullptr)
        return 0;
    return root->val + TreeSum_DFS(root->left) + TreeSum_DFS(root->right);
}

int TreeSum_BFS(node<int> *root)
{
    if (root == nullptr)
        return 0;

    queue<node<int> *> nodeQueue;
    nodeQueue.push(root);
    int sum = 0;
    while (!nodeQueue.empty())
    {
        node<int> *current = nodeQueue.front();
        nodeQueue.pop();
        sum += current->val;

        if (current->left != nullptr)
            nodeQueue.push(current->left);
        if (current->right != nullptr)
            nodeQueue.push(current->right);
    }
    return sum;
}
#endif