#include <bits/stdc++.h>
using namespace std;
struct node
{
    node*next;
    int data;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
node* rear,*front=NULL;

void create()
{
    int d;
    cout<<"Enter the values : ";
    cin>>d;
    node*ptr = new node(d);
    if(!ptr)
    {
        cout<<"Memory overflow"<<endl;
        return;
    }
    if(front==NULL)
    {
        front=rear=ptr;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
    }
}

void display()
{
    if(front==rear)
    {
        cout<<"Queue is empty";
    }
    else
    {
        node*temp=front;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<" "<<endl;
    }
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
