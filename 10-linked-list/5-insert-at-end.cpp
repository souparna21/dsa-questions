// Insert a given value at the end of  a linked list 
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

Node *insertAtEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    
    // corner case
    if(head == NULL)
    {
        return temp;
    }
    
    Node *current = head;
    if(current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    return head;
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
    Node *head = NULL;
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    printList(head);
    return 0;
}