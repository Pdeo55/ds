#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *sort012(node *&head)
{

    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }
    if (head->next == NULL)
    {
        // single node is LL
        return head;
    }
    // creat dummy nodes
    node *zerokahead = new node(-1);
    node *zerokatail = zerokahead;

    node *onekahead = new node(-1);
    node *onekatail = onekahead;

    node *twokahead = new node(-1);
    node *twokatail = twokahead;

    // transverse the original LL
    node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            // take out the zerowali node
            node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // apend that zero node to zerowali LL
            zerokatail->next = temp;
            zerokatail = temp;
        }
        else if (curr->data == 1)
        {
            // take out all 1s
            node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append in to onmw

            onekatail->next = temp;
            onekatail = temp;
        }
        else if (curr->data == 2)
        {
            // take out all 1s
            node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append in to onmw

            twokatail->next = temp;
            twokatail = temp;
        }
    }
    // remove dummy wala -1;
    node *temp = onekahead;
    onekahead = onekahead->next;
    temp->next = NULL;
    delete temp;

    temp = twokahead;
    twokahead = twokahead->next;
    temp->next = NULL;
    delete temp;

    if (onekahead != NULL)
    {
        // one wali list is non empty
        // zero wali list ko one wali list se attach krdia
        zerokatail->next = onekahead;

        if (twokahead != NULL)
        {
            onekatail->next = twokahead;
        }
    }
    else
    {
        // one wali list is empty
        if (twokahead != NULL)
        {
            zerokatail->next = twokahead;
        }
    }

    // remove zerohead dummy Node
    temp = zerokahead;
    zerokahead = zerokahead->next;
    temp->next = NULL;
    delete temp;

    // return head of the modified linked list
    return zerokahead;
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
    node *f1 = new node(0);
    node *f2 = new node(1);
    node *f3 = new node(0);
    node *f4 = new node(0);
    node *f5 = new node(2);
    node *f6 = new node(1);
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
    sort012(f1);
    cout<<endl;
    printLL(f1);

    return 0;
}