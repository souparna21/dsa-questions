// Search an item in singly linked list

/* ---------------------------- Iterative Solution ---------------------------*/
/* --------------------Time complexity = O(n), Aux space = O(1) --------------*/
/*
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

int search(Node *head, int n)
{
    int pos = 1;
    Node *current = head;
    while(current != 0)
    {
        if(current->data == n)
        {
            return pos;
        }
        pos++;
        current = current->next;
    }
    return -1;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    cout << search(head, 40);
    return 0;
}
*/

/*---------------------------- Recursive solution ------------------------------*/
/* --------------------Time complexity = O(n), Aux space = O(n) --------------*/
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

int search(Node *head, int n)
{
    if(head == NULL)
    {
        return -1;
    }
    if(head->data == n)
    {
        return 1;
    }

    int result = search(head->next, n);
    if(result == -1)
    {
        return -1;
    }
    else
    {
        return 1+result;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    cout << search(head, 30);
    return 0;
}