/*----------------------- Time Complexity = O(n) -----------------------------*/
/*----------------------- Aux Space = O(h) -----------------------------*/
#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node *prev;
    Node *next;

    Node(int k)
    {
        key = k;
        prev = next = NULL;
    }
};

int findHeight(Node *root)
{
    if(root == NULL) return 0;

    return max(findHeight(root->prev), findHeight(root->next))+1;
}

int main()
{
    Node *root = new Node(10);
    root->prev = new Node(20);
    root->next = new Node(30);
    root->next->prev = new Node(40);
    root->next->next = new Node(50);
    cout << findHeight(root);
    return 0;
}