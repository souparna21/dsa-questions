// Delete the last node of a singlly linked list
/* ------------------------------- Time Coplexity = O(n) ---------------------------------*/
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

Node *deleteAtEnd(Node *head)
{
    // corner casses
    if(head == NULL)
    {
        return NULL;
    }
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *current = head;
    while(current->next->next != NULL)
    {
        current = current->next;
    }
    delete current->next;
    current->next = NULL;
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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = deleteAtEnd(head);
    printList(head);
    return 0;
}