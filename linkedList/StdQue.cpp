#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node()
    {
        this->data = 0;
        this->next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
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

node *getMiddle(node *head)
{
    // if ll is empty
    if (head == NULL)
    {
        cout << "LL is empty";
        return head;
    }

    // if only 1 node in ll
    if (head->next == NULL)
    {
        return head;
    }

    // handel middle one
    node *slow = head;
    node *fast = head->next;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        // cross cheaking cuz if fast is on last node then it can give null exception error 
        // so we checking is it possible tojump on next for fast
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
int main(int argc, char const *argv[])
{
    node *f1 = new node(10);
    node *f2 = new node(20);
    node *f3 = new node(30);
    node *f4 = new node(40);
    node *f5 = new node(50);
    node *f6 = new node(60);
    node *f7 = new node(70);

    f1->next = f2;
    f2->next = f3;
    f3->next = f4;
    f4->next = f5;
    f5->next = f6;
    f6->next = f7;
    f7->next = NULL;
    printLL(f1);
    cout << endl;

    cout << "middle element is :- " << getMiddle(f1)->data << endl;
    return 0;
}
