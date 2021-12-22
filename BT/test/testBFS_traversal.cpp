#include"gtest/gtest.h"
#include"../BFS_traversal.cpp"

TEST(BFS_test_queue,Test1){
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
    BFS_traversal_using_queue(a,op);
    EXPECT_EQ("a b c d e f ",op);
}
TEST(BFS_test_queue,TestNULL){
    string op;
    node<string>* nullNode=nullptr;
    BFS_traversal_using_queue(nullNode,op);
    EXPECT_EQ("",op);
}