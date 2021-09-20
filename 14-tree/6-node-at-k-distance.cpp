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

void printkDist(Node *root, int k)
{
    if(root == NULL)
    {
        return ;
    }
    if(k == 0)
    {
        cout << root->key << " ";
    }

    printkDist(root->prev, k-1);
    printkDist(root->next, k-1);
}

int main()
{
    Node *root = new Node(10);
    root->prev = new Node(20);
    root->next = new Node(30);
    root->next->prev = new Node(40);
    root->next->next = new Node(50);
    int k;
    cin >> k;
    printkDist(root,k);
    return 0;
}