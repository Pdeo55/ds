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

void removeDuplicate(node* &head){
    // if ll is empty
    if (head == NULL)
    {
        cout << "LL is empty";
        return ;
    }

    // if only 1 node in ll
    if (head->next == NULL)
    {
        return ;
    }

    node * curr =head;

    while(curr!=NULL){
        if((curr->next !=NULL)&&(curr->data==curr->next->data)){
            node* temp =curr->next;
            curr->next=curr->next->next;
            temp->next=NULL;
            delete temp;

        }else{
            curr=curr->next;
        }
    }
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
    node *f3 = new node(20);
    node *f4 = new node(30);
    node *f5 = new node(40);
    node *f6 = new node(40);
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
cout<<endl;
removeDuplicate(f1);
printLL(f1);

    return 0;
}
