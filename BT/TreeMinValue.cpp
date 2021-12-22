#include "node.hh"
#include <limits>
#include <algorithm>
using namespace std;

//use numeric limits::inifinity only for float type
//for int type use min and max
int TreeMin_DFS(node<int> *root)
{
    if (root == nullptr)
        return numeric_limits<int>::max();
    const int left_min = TreeMin_DFS(root->left);
    const int right_min = TreeMin_DFS(root->right);
    return min({root->val, left_min, right_min});
}