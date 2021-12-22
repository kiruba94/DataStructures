#include"gtest/gtest.h"
#include"../DFS_traversal.cpp"
TEST(DFSTest_stack,Test1){
    node<string>* a= new node<string>('a');
    node<string>* b = new node<string>('b');
    node<string>* c = new node<string>('c');
    node<string>* d = new node<string>('d');
    node<string>* e = new node<string>('e');
    node<string>* f = new node<string>('f');
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;


    string op;
    DFS_using_stack(a,op);
    EXPECT_EQ("a b d e c f ",op);
}

TEST(DFSTest_stack,TestNull){
    string op;
    node<string>* nullNode=nullptr;
    DFS_using_stack(nullNode,op);
    EXPECT_EQ("",op);
}

TEST(DFSTest_recursion,Test1){
    node<string>* a= new node<string>('a');
    node<string>* b = new node<string>('b');
    node<string>* c = new node<string>('c');
    node<string>* d = new node<string>('d');
    node<string>* e = new node<string>('e');
    node<string>* f = new node<string>('f');
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;


    string op;
    DFS_using_recursion(a,op);
    EXPECT_EQ("a b d e c f ",op);
}

TEST(DFSTest_recursion,TestNull){
    string op;
    node<string>* nullNode=nullptr;
    DFS_using_recursion(nullNode,op);
    EXPECT_EQ("",op);
}