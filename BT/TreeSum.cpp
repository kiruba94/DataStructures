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
#endif