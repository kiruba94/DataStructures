#ifndef BFS_TRANSVERSAL
#define BFS_TRANSVERSAL
#include "node.hh"
using namespace std;

// BFS cannot be done using recursion
// Always use iterative approach with queue
template<typename T>
void BFS_traversal_using_queue(node<T> *root, T &out)
{
    queue<node<T> *> nodeQueue;
    if (root == nullptr)
    {
        out = "";
        return;
    }
    nodeQueue.push(root);
    while (!nodeQueue.empty())
    {
        node<T> *current = nodeQueue.front();
        nodeQueue.pop();

        if (current->left != nullptr)
            nodeQueue.push(current->left);
        if (current->right != nullptr)
            nodeQueue.push(current->right);

        out = out +current->val +" ";
    }
    return;
}
#endif