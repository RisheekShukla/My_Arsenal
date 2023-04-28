#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *pvs,*next;
};

struct node *head=NULL;
 
 void create()
 {
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Memory not allocated"<<endl;
    }
    int a;
    cout<<"Enter the element"<<endl;
    cin>>a;
    ptr->data=a;
    ptr->next=NULL;
    ptr->pvs=NULL;
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
         temp->next=ptr;
    }
    //free(temp);
 }

 void display()
 {
    struct node *temp;
    if(head==NULL)
    {
        cout<<"Empty list"<<endl;
    }
    else
    {
        temp=head;
        cout<<"The values are : ";
        while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    }
    //free(temp);
 }

void insert_at_beg()
{
    if(head==NULL)
    {
        create();
    }
    else
    {
        struct node *ptr;
        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->next=NULL;
        ptr->pvs=NULL;
         cout<<"enter the element"<<endl;
        cin>>ptr->data;
        if(!ptr)
        {
            cout<<"Sorry ! Memory Failure"<<endl;
        }
        head->pvs=ptr;
        ptr->next=head;
        head=ptr;
    }
}

 void insert_at_pos()
 {
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=NULL;
    ptr->pvs=NULL;
    if(ptr==NULL)
    {
        cout<<"Memory is not allocated"<<endl;
    }
    int pos,n;
    cout<<"Enter the position"<<endl;
    cin>>pos;
    if(pos==0)
    {
        insert_at_beg();
        return;
    }
    cout<<"enter the element"<<endl;
    cin>>n;
    ptr->data=n;
    temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    
    ptr->next=temp->next;
    temp->next=ptr;
    ptr->pvs=temp;
    //free(temp);
 }
 
void delete_at_beg()
{
    if(!head)
    {
        cout<<"Can't delete ! List is already empty"<<endl;
    }
    cout<<"Deleted element is : "<<head->data<<endl;
    head->next->pvs = NULL;
    head=head->next;
}

void delete_at_end()
{
    if(!head)
    {
        cout<<"Can't delete ! List is already empty"<<endl;
        return;
    }
    struct node *temp = head;
    struct node *tv;
    while(temp->next)
    {
        tv=temp;
        temp=temp->next;
    }
    cout<<"Deleted element is : "<<temp->data<<endl;
    temp->pvs=NULL;
    tv->next=NULL;
    //free(temp);
    //free(tv);
}

void delete_at_pos()
{
    struct node* temp;
    if(!head)
    {
        cout<<"List is already empty"<<endl;
    }
    int pos;
    cout<<"Enter the position"<<endl;
    cin>>pos;
    if(pos==0)
    {
        delete_at_beg();
        return;
    }
    temp=head;
    struct node*tv;
    for(int i=0;i<pos;i++)
    {
        tv=temp;
        temp=temp->next;
    }
    cout<<"Deleted Element is : "<<temp->data<<endl;
    temp->next->pvs=tv;
    tv->next=temp->next;
    //free(tv);
}

int main() 
{ int p;
    while(1)
    {
    cout<<"\nChoose your operation"<<endl;
    cout<<" 1. Create "<<endl;
    cout<<" 2. Display "<<endl;
    cout<<" 3. Insert at begining "<<endl;
    cout<<" 4. Insert at end "<<endl;
    cout<<" 5. insert at position "<<endl;
    cout<<" 6. delete at beg "<<endl;
    cout<<" 7. delete at end "<<endl;
    cout<<" 8. delete at pos "<<endl;
    cout<<" 9. exit "<<endl;
    cout<<"Please enter your choice"<<endl;
    cin>>p;
    switch (p)
    {
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        insert_at_beg();
        break;
    case 4:
        create();
        break;
    case 5:
        insert_at_pos();
        break;
    case 6:
        delete_at_beg();
        break;
    case 7:
        delete_at_end();
        break;
    case 8:
        delete_at_pos();
        break;
    case 9:
        exit(0);
        break;
    }
    }
return 0;
}