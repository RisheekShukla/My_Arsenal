#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head = NULL;

void create()
{
    node *ptr,*temp;
    // memory me ek space allot karwaya
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Memory not allocated"<<endl;
    }
    int info;
    cout<<"Enter the value : ";
    cin>>info;
    ptr->data=info;
    ptr->next=head;
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        temp = head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=ptr;
    }

}

void display()
{
    node*temp = head;
    if(head==NULL)
    {
        cout<<"List is empty now"<<endl;
    }
    else
    {
        cout<<"The values are : ";
        while(temp->next!=head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    cout<<endl;
}

void ins_at_beg()
{
    node*ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    cout<<"Enter the value : ";
    int info;
    cin>>info;
    ptr->data=info;
    ptr->next= head;
    head=ptr;
    cout<<endl;
}

void ins_at_end()
{
    create();
}

void del_at_beg()
{
    node*temp;
    if(head==NULL || head->next==head)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next = head->next;
        head=head->next;
    }
}

void del_at_end()
{
    node*temp;
    node*tv;
    if(head==NULL || head->next==head)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            tv=temp;
            temp=temp->next;
        }
        tv->next=head;
    }
}

int main() 
{
int p;
while(1)
{
    cout<<"--------MENU--------"<<endl;
    cout<<"1.Create\n2.Display\n3.Insert at Begin\n4.Insert at End\n5.Delete at Begin\n6.Delete at End\n7.Exit"<<endl;
    cout<<"Enter the choice"<<endl;
    cin>>p;
    switch(p)
    {
        case 1: create(); break;
        case 2: display(); break;
        case 3: ins_at_beg(); break;
        case 4: ins_at_end(); break;
        case 5: del_at_beg(); break;
        case 6: del_at_end(); break;
        case 7: exit(4); break;
    }
}
return 0;
}