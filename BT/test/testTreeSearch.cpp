#include "gtest/gtest.h"
#include "../TreeSearch.cpp"

TEST(BT_Search, BFS_approach)
{
    node<string> *a = new node<string>('a');
    node<string> *b = new node<string>('b');
    node<string> *c = new node<string>('c');
    node<string> *d = new node<string>('d');
    node<string> *e = new node<string>('e');
    node<string> *f = new node<string>('f');
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;

    EXPECT_TRUE(BFS_TreeSearch(a, e->val));
    EXPECT_TRUE(BFS_TreeSearch(a, f->val));
    EXPECT_TRUE(BFS_TreeSearch(b, d->val));
    EXPECT_FALSE(BFS_TreeSearch(a, string("g")));
    EXPECT_FALSE(BFS_TreeSearch(c, a->val));
    node<string> *nullNode = nullptr;
    EXPECT_FALSE(BFS_TreeSearch(nullNode, d->val));
}
TEST(BT_Search, DFS_approach)
{
    node<string> *a = new node<string>('a');
    node<string> *b = new node<string>('b');
    node<string> *c = new node<string>('c');
    node<string> *d = new node<string>('d');
    node<string> *e = new node<string>('e');
    node<string> *f = new node<string>('f');
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;

    EXPECT_TRUE(DFS_TreeSearch(a, e->val));
    EXPECT_TRUE(DFS_TreeSearch(a, f->val));
    EXPECT_TRUE(DFS_TreeSearch(b, d->val));
    EXPECT_FALSE(DFS_TreeSearch(a, string("g")));
    EXPECT_FALSE(DFS_TreeSearch(c, a->val));
    node<string> *nullNode = nullptr;
    EXPECT_FALSE(DFS_TreeSearch(nullNode, d->val));
}
