#include <gtest/gtest.h>
#include "../TreeMinValue.cpp"

TEST(Test_TreeMinValue, Test1)
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
        7  6 11  1
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
    EXPECT_EQ(TreeMin_DFS(a), 1);
    EXPECT_EQ(TreeMin_DFS(nullNode), numeric_limits<int>::max());
    EXPECT_EQ(TreeMin_DFS(b), 2);
    EXPECT_EQ(TreeMin_DFS(d), 7);
}