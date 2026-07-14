#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int val)
    {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree
{
public:
    Node *root;
    BinaryTree()
    {
        root = nullptr;
    }

    Node *insert(int val)
    {
        Node node = Node(val);
        if (root == nullptr)
        {
            root = &node;
        }
        node.left = insert(node.left->value);
        node.right = insert(node.right->value);
        return &node;
    }
    void display()
    {
        if (root == nullptr)
        {
            return;
        }

        cout << root->value;
    }
};

int main()
{
    // cout << 0;
    BinaryTree tree = BinaryTree();
    tree.insert(123);
    tree.insert(98);
    tree.display();
    return 0;
}