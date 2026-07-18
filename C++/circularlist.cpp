#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        val = val;
    }
};

class LinkedList
{
public:
    Node *head;
    Node *tail;

    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void insert(int val)
    {
        Node *node = new Node(val);
        if (head == nullptr)
        {
            node = head;
            tail = head;
            return;
        }
        tail->next = node;
        node->next = head;
        head = node;
        return;
    }

    void display()
    {
        Node *temp = head;
        if (temp == nullptr)
        {
            cout << "list empty";
        }
        do
        {
            cout << temp->val;
            temp = temp->next;
        } while (temp != head);
    }
};

int main()
{
    LinkedList ll = LinkedList();
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.display();

    return 0;
}