#include <iostream>
using namespace std;

struct Node
{
    bool is_leaf;
    union {
        struct
        {
            struct Node *left;
            struct Node *Right;
        } internal;
    } info;
};