#include <gtest/gtest.h>
#include "../MaxRootToLeafPathSum.cpp"

TEST(Test_MaxRootToLeafPathSum, Test1)
{
    node<int> *a = new node<int>(13);
    node<int> *b = new node<int>(2);
    node<int> *c = new node<int>(3);
    node<int> *d = new node<int>(7);
    node<int> *e = new node<int>(9);
    node<int> *f = new node<int>(11);
    node<int> *g = new node<int>(1);
    node<int> *h = new node<int>(27);
    /*
            13
           / \
          2   3
         / \  / \
        7  9 11  1
                  \
                  27
    */
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->right = h;

    node<int> *nullNode = nullptr;
    EXPECT_EQ(MaxRootToLeafPathSum(a), 44);
    EXPECT_EQ(MaxRootToLeafPathSum(b), 11);
    EXPECT_EQ(MaxRootToLeafPathSum(e), 9);
    EXPECT_EQ(MaxRootToLeafPathSum(nullNode), 0);
}