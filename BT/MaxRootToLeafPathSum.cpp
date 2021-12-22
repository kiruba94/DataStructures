#ifndef MAX_ROOT_TO_PATH
#define MAX_ROOT_TO_PATH
#include "node.hh"
#include <algorithm>
using namespace std;

int MaxRootToLeafPathSum(node<int> *root)
{
    if (root == nullptr)
        return 0;

    int leftSum = root->val + MaxRootToLeafPathSum(root->left);
    int rightSum = root->val + MaxRootToLeafPathSum(root->right);
    return max(leftSum, rightSum);
}

#endif
