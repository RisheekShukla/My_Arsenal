#include <bits/stdc++.h>
using namespace std;
class node {
public:
 int data;
 node* next;
 node(int d)
 {
    this->data=d;
    this->next=NULL;
 }
};

void insert_at_end(node* &tail,int element,int d)
{
    
    if(tail==NULL)
    {
        node* ptr = new node(d);
        tail=ptr;
        ptr->next=ptr;
    }
    else
    {
        node* temp = tail;
        while(temp->data!=element)
        {
           temp=temp->next; 
        }
        node* ptr = new node(d);
        ptr->next=temp->next;
        temp->next=ptr;
    }
}

void display(node* tail)
{
    node* temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);

}

void delte(node*tail,int element)
{
    if(!tail)
    {
        cout<<"Empty list";
    }
    else
    {
        node*temp=tail;
        node*curr = temp->next;
        while(curr->data!=element)
        {
            temp=curr;
            curr=curr->next;
        }
        temp->next=curr->next;
        curr->next = NULL;
    }
}


int main() 
{

node* tail = NULL;
insert_at_end(tail,5,3);
insert_at_end(tail,3,5);
insert_at_end(tail,5,5);
insert_at_end(tail,5,7);
insert_at_end(tail,5,3);
delte(tail,5);6
display(tail);

return 0;
}