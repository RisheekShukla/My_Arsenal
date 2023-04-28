#include <bits/stdc++.h>
using namespace std;

struct node
{
    node*next;
    node*pvs;
    int data;
    node(int d)
    {
       this->data=d;
       this->next=NULL;
       this->pvs=NULL;
    }
};
node *head=NULL;
void create()
{
    int d;
    cout<<"Enter the value"<<endl;
    cin>>d;
    node*ptr=new node(d);
    if(!ptr)
    {
        cout<<"Memory not allocated"<<endl;
        return;
    }
    if(!head)
    {
        head=ptr;
        head->next=head;
        head->pvs=head;
    }
    else
    {
        node*temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->pvs=temp;
        ptr->next=head;
    }
}

void display()
{
    node*temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}

int main() 
{
while(1)
{     
    int n;
    cout<<"---------------<MENU>---------------"<<endl;
    cout<<" 1. Create "<<endl;
    cout<<" 2. Display "<<endl;
    cout<<"Enter your choice : ";
    cin>>n;

    switch(n)
    {
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 3:
        exit(3);
        break;
    }
}
return 0;
}