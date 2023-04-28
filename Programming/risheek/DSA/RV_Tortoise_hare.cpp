#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node* pvs;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->pvs=NULL;
    }
};

void insrt_at_end(node* & head,int d)
{
    node* ptr = new node(d);
    if(head == NULL)
    {
        head=ptr;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=ptr;
   // ptr->next=NULL;
    ptr->pvs=temp;
   // delete temp;   
    
}
void midd_node(node* head)
{
    node *fast,*slow;
    fast=slow=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"The middle node contains : "<<slow->data<<endl;
}

void display(node * head)
{
    if(head==NULL)
    {
        cout<<"Empty list"<<endl;
        return;
    }
    node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<endl;
        temp=temp->next;        
    }                                        

    
}
int main() 
{
    node* head = NULL;
 insrt_at_end(head,11);
 insrt_at_end(head,12);
 insrt_at_end(head,13);
 insrt_at_end(head,14);
 insrt_at_end(head,15);
 insrt_at_end(head,16);

 display(head);
 midd_node(head);
return 0;
}