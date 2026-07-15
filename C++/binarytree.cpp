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

    Node *insert(int val, Node *node)
    {

        if (node == nullptr)
        {
            Node newNode = Node(val);
            node = &newNode;
            return node;
        }
        node->left = insert(val, node->left);

        node->right = insert(val, node->right);
        return node;
    }

    void insert(int val)
    {
        root = insert(val, root);
    }
    void inorder(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        inorder(node->left);
        cout << node->value;
        inorder(node->left);
    }
    void inorder()
    {
        inorder(root);
    }
};

int main()
{
    cout << 0;
    BinaryTree tree = BinaryTree();
    tree.insert(123);
    tree.insert(98);
    tree.insert(99);
    tree.insert(0);
    tree.insert(9);
    tree.inorder();
    return 0;
}