#include <bits/stdc++.h>
using namespace std;

struct node
{
   int data;
   node*next;
   node*prev;
   node(int d)
   {
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
   }
};
node* head=NULL;
void create(int a[],int n)
{
    head=new node(a[0]);
    node*last;
    node*t;
    last=head;
    if(!head)
    {
        cout<<"Memory not allocated"<<endl;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            t=new node(a[i]);
            last->next=t;
            last=t;
        }
    }
}

void print(node*head)
{
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
int a[]={1,2,3,4,5,6,7,8,9};
create(a,9);
print(head);
return 0;
}