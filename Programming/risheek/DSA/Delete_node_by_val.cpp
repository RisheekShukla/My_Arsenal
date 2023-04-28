#include <bits/stdc++.h>
using namespace std;
class Node {
public:
int data;
Node* next;

Node(int data)
{
    this->data=data;
    this->next=NULL;
}
};

void insrt_at_head(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
    //cout<<temp->data<<endl;
}

void insrt_at_tail(Node* &tail,int d)
{
    Node*temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void delete_val(Node *& head,int d)
{
    if(head==NULL)
    {
        cout<<"EMPTY LIST"<<endl;
    }
    Node* temp = head;
    Node* pac = NULL;
    while(temp!=NULL && temp->data!=d)
    {
        pac=temp;
        temp=temp->next;
    }
    pac->next=temp->next;
}

void print(Node* &head)
{
    int count=0;
    Node* temp = head;
    while(temp!=NULL)
    {
       // cout<<temp->data<<" ";
        temp = temp->next;
        count++;
    }
    Node* paet=head;
    Node* norm;
    int i=0;
    int pos;
    if(count%2==0)
    {  pos=count/2;}
    else
    {
       pos=(count/2)+1;
    }
    while(i<pos)
    {
        //cout<<paet->data<<" ";
        norm=paet;
        paet=paet->next;
        i++;
    }
    cout<<"\n count is :"<<count<<endl;
    cout<<" pos is :"<<pos<<endl;
    cout<<norm->data<<endl;
    
}

int main() 
{
Node* n1 = new Node(10);
Node*head = n1;
Node*tail = n1;
// insrt_at_head(head,11);
// insrt_at_head(head,12);
// insrt_at_head(head,13);
// insrt_at_head(head,14);
// insrt_at_head(head,15);
// insrt_at_head(head,16);

insrt_at_tail(tail,11);
insrt_at_tail(tail,12);
insrt_at_tail(tail,13);
insrt_at_tail(tail,14);
insrt_at_tail(tail,15);
insrt_at_tail(tail,16);
// delete_val(head,13);
print(head);
//cout<<n1->data<<" "<<n1->next;

return 0;
}