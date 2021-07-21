// Print out a linked list

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
    Node *current = head;
    while(current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}

// void printList(Node *head)
// {
//     while(head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printList(head);
    printList(head);
    return 0;
}