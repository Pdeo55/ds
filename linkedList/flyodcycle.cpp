#include<bits/stdc++.h>
using namespace std;

class node{
    public:
       int data;
       node* next;

       node(){
        this->data=0;
        this->next=NULL;
       }
       node(int data){
        this->data=data;
        this->next=NULL;
       }

};

bool isCyclic(node* &head){
    if(head==NULL){
        cout<<"ll is empty";
        return false;
    }
    node* slow=head;
    node* fast = head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
          
        }
          if(fast==slow){
                return true;
            }
    }

    return false;
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
    node *f8 = new node(80);
    node *f9 = new node(90);
    node *f10 = new node(100);

    f1->next = f2;
    f2->next = f3;
    f3->next = f4;
    f4->next = f5;
    f5->next = f6;
    f6->next = f7;
    f7->next = f8;
    f8->next = f9;
    f9->next = f10;
    f10->next = f5;
    // f10->next = NULL;
    

 
        cout<<"cycle is present there "<<isCyclic(f1);
 

    // cout << "middle element is :- " << getMiddle(f1)->data << endl;
    return 0;
}