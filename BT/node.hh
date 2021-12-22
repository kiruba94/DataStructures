#ifndef NODE_HH
#define NODE_HH
#include <string>
#include <iostream>
#include <string>
#include <queue>
#include <stack>
template <typename T>
class node
{
public:
    T val;
    node<T> *left;
    node<T> *right;

public:
    node(int val)
    {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};
#endif