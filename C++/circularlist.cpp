#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val) : val(val)
    {
        next = nullptr;
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
            head = node;
            tail = head;
            return;
        }
        tail->next = node;
        node->next = head;
        tail = node;
        return;
    }

    void display()
    {
        Node *temp = head;
        if (temp == nullptr)
        {
            cout << "list empty";
            return;
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