#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void printTree(struct Node *root)
{
    if (root == NULL)
        return;
    printf("%d", root->data);
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    printf("Hello");
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    printTree(root);
    return 0;
}