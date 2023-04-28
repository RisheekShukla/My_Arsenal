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

// max using recursion
int recur_maxi(Node* head)
{
    int x=0;
    if(head==0)
    {
        return 0;
    }
    x=recur_maxi(head->next);
    return x<head->data?head->data:x;
    
}

// Linear search in linked list
void search(Node*head,int f)
{ 
    int count=0;
    while(head)
    {
        if(head->data==f)
        {
            count++;
            cout<<"Yes it is found"<<endl;
            return;
        }
        head=head->next;

    }
    if(count==0)
    {
        cout<<"No it was not present"<<endl;
        return;
    }
}

// Linear Search using recursion
Node* recur_search(Node*head,int k)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(k==head->data)
    {
        return head;
    }
    return recur_search(head->next,k);

}

// max of a linked list
void maxi(Node* head)
{
    int max=head->data;
    while(head)
    {
        if(max<head->data)
        {
            max=head->data;
        }
        head=head->next;
    }
    cout<<"The max element is : "<<max<<endl;
}

// add linked list using simple method
void add(Node *head)
{   int sum=0;
    while(head)
    {
        sum=sum+head->data;
        head=head->next;
    }
    cout<<"The sum of the LL was : "<<sum<<endl;
}

// add using recursion
int recur_add(Node * head)
{
    if(head)
    {
        return head->data+recur_add(head->next);
    }
    else
    {
        return 0;
    }
}
// count nodes using simple method
void count(Node* head)
{
    int c=0;
    while(head)
    {
        c++;
        head=head->next;
    }
    cout<<"\nThe total number of nodes are : "<<c<<endl;
}

// count node using recursion
int recur_count(Node*head)
{
    if(head)
    {
        return recur_count(head->next)+1;
    }
    else
    {
        return 0;
    }

}

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

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() 
{
Node* n1 = new Node(10);
Node*head = n1;
Node*tail = n1;
//insrt_at_head(head,11);
//insrt_at_head(head,12);
// insrt_at_head(head,13);
// insrt_at_head(head,14);

insrt_at_tail(tail,17);
insrt_at_tail(tail,15);
insrt_at_tail(tail,19);
insrt_at_tail(tail,20);
print(head);
//count(head);
//cout<<recur_count(head)<<endl;
//add(head);
//cout<<n1->data<<" "<<n1->next;
//cout<<recur_add(head)<<endl;
// maxi(head);
// search(head,20);
// cout<<"The max number is "<<recur_maxi(head)<<endl;
// cout<<recur_search(head,15)->data;
return 0;
}