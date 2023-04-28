#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    node(int d)
  {
    this->data=d;
    this->next=NULL;
  }
};

node* front= NULL;
node*rear = NULL;

void push()
{
    int p;
    cout<<"Enter the value"<<endl;
    cin>>p;
    node* ptr = new node(p);
    if(!front)
    {
        front=rear=ptr;
    }
    else
    {
        front->next=ptr;
        front=ptr;
    }
}

void pop()
{
    if(rear==NULL||rear->next==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        rear=rear->next;
    }
}

void display()
{
   if(front==rear)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        node*temp=rear;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

int main()
{
while(1)
{
cout<<"----------------<MENU>-----------------------"<<endl;
cout<<"1.push"<<endl;
cout<<"2.pop"<<endl;
cout<<"3.display"<<endl;
cout<<"4.exit"<<endl;
int a;
cout<<"Enter a choice"<<endl;
cin>>a;
switch(a)
{
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(6);
        break;
}
}
return 0;
} 