#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
    int value;
    int height;
    Node *left;
    Node *right;
    Node(int val)
    {
        value = val;
        height = 1;
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

    int height(Node *node)
    {
        return (node == nullptr) ? 0 : node->height;
    }

    Node *insert(int val, Node *node)
    {

        if (node == nullptr)
        {
            return new Node(val);
        }
        if (val < node->value)
        {
            node->left = insert(val, node->left);
        }
        else if (val > node->value)
        {
            node->right = insert(val, node->right);
        }
        node->height = max(height(node->left), height(node->left)) + 1;
        return rotate(node);
    }

    bool balanced()
    {
        return balanced(root);
    }

    bool balanced(Node *node)
    {
        if (node == nullptr)
        {
            return true;
        }
        return abs(height(node->left) - height(node->right)) <= 1 && balanced(node->left) && balanced(node->right);
    }

    Node *rotate(Node *node)
    {

        if ((height(node->left) - height(node->right)) > 1)
        {
            if ((height(node->left->left) - height(node->left->right)) > 0)
            {
                return rotateRight(node);
            }
            else
            {
                node->left = rotateLeft(node->left);
                return rotateRight(node);
            }
        }

        if ((height(node->left) - height(node->right)) < -1)
        {
            if ((height(node->right->right) - height(node->right->left)) > 0)
            {
                return rotateLeft(node);
            }
            else
            {
                node->right = rotateRight(node->right);
                return rotateLeft(node);
            }
        }
        return node;
    }

    Node *rotateRight(Node *node)
    {
        Node *p = node;
        Node *c = p->left;
        Node *temp = c->right;
        c->right = p;
        p->left = temp;
        p->height = max(height(p->left), height(p->right)) + 1;
        c->height = max(height(c->left), height(c->right)) + 1;
        return c;
    }

    Node *rotateLeft(Node *node)
    {
        Node *c = node;
        Node *p = c->right;
        Node *temp = p->left;

        p->left = c;
        c->right = temp;

        p->height = max(height(p->left), height(p->right)) + 1;
        c->height = max(height(c->left), height(c->right)) + 1;
        return p;
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
        cout << node->value << "\n";
        inorder(node->right);
    }
    void inorder()
    {
        inorder(root);
    }
};

int main()
{
    // cout << 0;
    BinaryTree tree = BinaryTree();
    tree.insert(12);
    tree.insert(98);
    tree.insert(99);
    tree.insert(0);
    tree.insert(9);
    tree.insert(1);
    //  tree.insert(2);
    tree.inorder();

    cout << "\n"
         << tree.balanced();
    int a = 10;
    int b = 20;
    int c = max(a, b);
    // cout << c;

    return 0;
}