#ifndef TREE_SUM
#define TREE_SUM
#include"node.hh"
using namespace std;

int TreeSum(node<int>* root){
    if(root == nullptr)
        return 0;
    
    int sum = 0;
    sum+=root->val;

    if(root->left!=nullptr)
        sum += TreeSum(root->left);
    if(root->right!=nullptr)
        sum += TreeSum(root->right);
    
    return sum;
}
#endif