// Delete the first node of a singlly linked list
 
//<--------------------- Time complexity = O(1) ------------------------->//
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

Node *deleteAtBegin(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node *temp = head->next;
    delete head;
    return temp;
}

void printList(Node *head)
{
    Node *current = head;
    while(current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = deleteAtBegin(head);
    printList(head);
    return 0;
}