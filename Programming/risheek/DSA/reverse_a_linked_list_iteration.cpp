#include <bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    node* next;
    node(int n)
    {
        this->data=n;
        this->next=NULL;
    }
};

void reverse_a_ll(node*&head)
{
    node * curr=head;
    node * pvs=NULL;
    node * next;

    while(curr)
    {
        next=curr->next;
        curr->next=pvs;
        pvs=curr;
        curr=next;
    }
    head=pvs;
    cout<<"LinkList reversed"<<endl;
}

void create(node*&head,int d)
{
    node*ptr=new node(d);
    if(!ptr)
    {
        cout<<"Memory not allocated"<<endl;
        return;
    }
    if(!head)
    {
        head=ptr;
    }
    else
    {
        node*temp=head;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next = ptr;
    }
}

void display(node*head)
{
    if(head==NULL)
    {
        cout<<"Empty Linked List"<<endl;
        return;
    }
    node*temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() 
{
node * head = NULL;
create(head,3);
create(head,4);
create(head,5);
create(head,6);
create(head,7);
create(head,8);
create(head,9);
create(head,10);
display(head);
reverse_a_ll(head);
display(head);
return 0;
}