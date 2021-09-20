// Print a lined list using recursion
/* ---------------------- Recursive Solution --------------------*/ 
       /*---Time complexity: O(n), Space Complexity: O(n)----*/

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *head)
{
    // base case
    if(head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    printList(head->next);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printList(head);
    return 0;
}