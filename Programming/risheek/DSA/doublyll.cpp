#include <bits/stdc++.h>
using namespace std;
class Node {
public:
 Node* prvs;
 int data;
 Node* next;
 Node(int d)
 {
    this->data=d;
    this->next=NULL;
    this->prvs=NULL;
 } 
};

void insertAtHead(Node* &head,int d)
{
    Node* ptr = new Node(d);
    ptr->next = head;
    if(head!=NULL)
    {
        head->prvs=ptr;
    }
    head=ptr;
}

void insertAtTail(Node* &head,int d)
{
    Node* ptry = new Node(d);
    if(head==NULL)
    {
        head=ptry;
        return;
    }
    Node* temp = head;
        while(temp->next!=NULL)
        {
          temp=temp->next;
        }
        temp->next=ptry;
        ptry->prvs=temp;
    
}

void insertAtMiddle(Node* & head,int val,int pos)
{
    if(pos==0)
    {
        insertAtHead(head,val);
        return;
    }
    Node* ptr = new Node(val);
    Node* temp = head;
    for(int i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    ptr->next = temp->next;
    temp->next=ptr;
    ptr->prvs=temp;
    if(ptr->next!=NULL)
    {
        ptr->next->prvs=ptr;
    }
}

void deleteAtFirst(Node* &head)
{
    Node* temp = head;
    head=head->next;
    head->prvs=NULL;
    delete temp;
}

void deleteAtLast(Node* &head)
{
    if(head->next==NULL)
    {
        deleteAtFirst(head);
        return;
    }
    Node* temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->prvs->next=NULL;
    free(temp);

}

void deleteAtPos(Node* &head,int pos)
{
    if(pos==1)
    {
        deleteAtFirst(head);
        return;
    }
    Node* temp=head;
    while(temp!=NULL && pos!=1)
    {
        temp=temp->next;
        pos--;
    }
    temp->prvs->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->prvs=temp->prvs;
    }
}

void display(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}



int main() 
{
Node* head=NULL;
   insertAtTail(head,1);
   insertAtTail(head,2);
   insertAtTail(head,3);
   insertAtTail(head,4);
   insertAtTail(head,5);
   display(head);
  insertAtHead(head,2);
  display(head);
  insertAtHead(head,4);
  insertAtHead(head,6);
  insertAtHead(head,8);
  insertAtHead(head,10);
  display(head);
  insertAtMiddle(head,0,0);
  display(head);
  deleteAtFirst(head);
  display(head);
  deleteAtLast(head);
  display(head);
  deleteAtPos(head,2);
  display(head);
return 0;
}