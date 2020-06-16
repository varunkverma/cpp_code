#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *start, *last;

void insert(int x)
{

    // If LL is empty
    if (!start)
    {
        start = (Node *)malloc(sizeof(Node));
        start->data = x;
        start->next = nullptr;
        last = start;
    }
    // create a new node and add it at the end of the LL
    else
    {
        last->next = (Node *)malloc(sizeof(Node));
        last = last->next;
        last->data = x;
        last->next = nullptr;
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    Node *temp = start;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}