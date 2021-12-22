#include<gtest/gtest.h>
#include"../TreeSum.cpp"

TEST(test_TreeSum,Test1){
    node<int>* a = new node<int>(1);
    node<int>* b = new node<int>(2);
    node<int>* c = new node<int>(5);
    node<int>* d = new node<int>(7);
    node<int>* e = new node<int>(9);
    node<int>* f = new node<int>(11);
    node<int>* g = new node<int>(15);
    node<int>* h = new node<int>(27);
    /*
            1
           / \
          2   5
         / \  / \
        7  9 11  15
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

   EXPECT_EQ(TreeSum_DFS(a),77);
   EXPECT_EQ(TreeSum_DFS(b),18);
   EXPECT_EQ(TreeSum_DFS(g),42);
   EXPECT_EQ(TreeSum_DFS(e),9);
   node<int>* nullNode = nullptr;
   EXPECT_EQ(TreeSum_DFS(nullNode),0);



}