#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAthead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {

        // step 1:- creat a node
        Node *newNode = new Node(data);

        // step 2 :-
        newNode->next = head;

        // step 3:-
        head = newNode;
    }
}

void insertAttail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // step1 :- creat new node

        Node *newNode = new Node(data);

        // Handle next pointer
        newNode->next = tail;

        // Make tail as newNode

        tail = newNode;
    }
}

int findLength(Node *head)
{
    Node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}
void insertAtPosition(Node *&head, Node *&tail, int pos, int data)
{

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //step1: find the position: prev & curr;

        if(pos == 0) {
                insertAthead(head, tail , data);
                return;
        }
       
        int len = findLength(head);
        
        if(pos >= len) {
                insertAttail(head, tail, data);
                return;
        }
    // step:-> find a position at which we have to insert

    int i = 1;
    Node *prev = head;
    while (i < pos)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    // step 2:-> create neew node

    Node *newNode = new Node(data);

    // step 3 :-> make curr node as next of new inserted node

    newNode->next = curr;

    // step 3:- make newNode as next of prev node

    prev->next = newNode;
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    Node *tail = NULL;
    // Node* head = new Node(10);

    for (int i = 1; i < 5; i++)
    {
        insertAthead(head, tail, 10 * i);
    }
    //    for (int i = 6; i < 10; i++)
    // {
    //     insertAttail(head, tail, 10 * i);
    // }

    /* insertIntoLL(head,20);
    insertIntoLL(head,30);
    insertIntoLL(head,50);
    insertIntoLL(head,60);
    */
    insertAtPosition(head, tail, 2, 66);

    printLL(head);

    return 0;
}
