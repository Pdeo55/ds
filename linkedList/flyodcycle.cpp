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
        //agar fast and slow mil gaye matlab cycle hai
          if(fast==slow){
                return true;
            }
    }

    return false;
}


node* firstNodeofLoop(node* &head){
    if(head==NULL){
        cout<<"ll is empty";
        return NULL;
    }
    node* slow=head;
    node* fast = head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
          
        }
        //again start slow from head  A+xC+B wala logic lagaya hai notes me hai
          if(fast==slow){
                slow=head;
                break;
            }
    }
    while(slow!=fast){
        //fast jo same pointer tha wahase chalega and slow head se chalega
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}



void removeLoop(node* &head){
    if(head==NULL){
        cout<<"ll is empty";
        return;
    }
    node* slow=head;
    node* fast = head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
          
        }
        //again start slow from head  A+xC+B wala logic lagaya hai notes me hai
          if(fast==slow){
                slow=head;
                break;
            }
    }
    node* prev=fast;
    while(slow!=fast){
        prev=fast;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=NULL;
   
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
    

 
        cout<<"cycle is present there "<<isCyclic(f1)<<endl;
        cout<<"starting point of loop cycle is "<<firstNodeofLoop(f1)->data<<endl;
        removeLoop(f1);
        if (isCyclic(f1))
        {
            cout<<"we cant print LL as it is circular "<<endl;
        }else{
            cout<<"loop is removed now printing LL :-"<<endl;
            printLL(f1);
        }
        
 

    // cout << "middle element is :- " << getMiddle(f1)->data << endl;
    return 0;
}