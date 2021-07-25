/*----------------------- Time Complexity = O(n) -----------------------------*/
/*----------------------- Aux Space = O(h) -----------------------------*/
#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void inOrder(Node *root)
{
    // base case
    if(root == NULL) return;

    inOrder(root->left);
    inOrder(root->right);
    cout << root->key << " ";
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    inOrder(root);
    return 0;
}