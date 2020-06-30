#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;
    Node(int data) : data(data), next(nullptr) {}

public:
    friend class LinkedList;
};

class LinkedList
{
public:
    Node *root;

    LinkedList(int data)
    {
        root = new Node(data);
    }

    void insert(int data)
    {
        Node *temp = root;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new Node(data);
    }

    void PrintLinkedList()
    {
        Node *temp = root;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList *ll = new LinkedList(10);
    ll->insert(20);
    ll->insert(30);
    ll->insert(40);
    ll->insert(50);
    ll->PrintLinkedList();

    return 0;
}