#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node *prev;

    node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printLL(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(node *&head)
{
    node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }

    return l;
}

void insertAthead(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *newNode = new node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // LL is not empty
    //  step1-> creat new node

    node *newNode = new node(data);

    // step 2 :- make new nodes next as head
    newNode->next = head;

    // step 3 :- make head prev as newnode
    head->prev = newNode;

    // step 4 :- make new node as head
    head = newNode;
}
void insertAttail(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *newNode = new node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // LL is not empty
    //  step1-> creat new node

    node *newNode = new node(data);

    // step 2 :- make tails next as newNode
    tail->next = newNode;

    // step 3 :- make newNode prev as tail
    newNode->prev = tail;

    // step 4 :- make new node as tail
    tail = newNode;
}

int main(int argc, char const *argv[])
{
    node *f1 = new node(10);
    node *f2 = new node(20);
    node *f3 = new node(30);

    node *head = f1;
    node *tail = f3;

    f1->next = f2;
    f2->prev = f1;

    f2->next = f3;
    f3->prev = f2;

    printLL(f1);
    cout << endl;
    insertAthead(head, tail, 233);
    printLL(head);
    cout << endl;
    insertAttail(head, tail, 293);
    printLL(head);
    return 0;
}
