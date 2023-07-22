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

node *reverse(node *&head)
{
    node *curr = head;
    node *prev = NULL;
    node *forward = curr->next;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

bool ispalindrome(node *&head)
{
    if (head == NULL)
    {
        cout << "ll is empty";
        return true;
    }

    if (head->next == NULL)
    {
        // single elemnt in LL that is palindrome
        return true;
    }
    // find the middle of LL with fast and slow
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL)
    {
       fast=fast->next;
        if (fast != NULL)
        {
           fast= fast->next ;
            slow=slow->next ;
            // slow is middle node
        }
    }

    // step 2 reverse LL from the node next to middle one

    node *reversekahead = reverse(slow->next);
    slow->next = reversekahead;

    // step 3 compare both ll
    node *temp1 = head;
    node *temp2 = reversekahead;

    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}
void printLL(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(int argc, char const *argv[])
{
    node *f1 = new node(10);
    node *f2 = new node(20);
    node *f3 = new node(30);
    node *f4 = new node(30);
    node *f5 = new node(20);
    node *f6 = new node(10);
    // node *f7 = new node(70);
    // node *f8 = new node(80);
    // node *f9 = new node(90);
    // node *f10 = new node(100);

    f1->next = f2;
    f2->next = f3;
    f3->next = f4;
    f4->next = f5;
    f5->next = f6;
    f6->next = NULL;
    // f7->next = f8;
    // f8->next = f9;
    // f9->next = f10;
    // f10->next = f5;
    // f10->next = NULL;

printLL(f1);

    if (ispalindrome(f1))
    {
        cout << "it is palindrome" << endl;
    }
    else
    {
        cout << "it is not palindrome" << endl;
    }
    return 0;
}
