// Insert a node at a certain position

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

Node *insertAt(Node *head, int pos, int num)
{
    Node *temp = new Node(num);
    if(pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *current = head;
    for(int i=1; i<=pos-2 && current!=NULL; i++)
    {
        current = current->next;
    }
    if(current == NULL)
    {
        return head;
    }
    temp->next = current->next;
    current->next = temp;
    return head;
}

void printList(Node *head)
{
    Node *current = head;
    while(current != 0)
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
    head->next->next->next = new Node(40);
    head = insertAt(head,3,25);
    printList(head);
    return 0;
}