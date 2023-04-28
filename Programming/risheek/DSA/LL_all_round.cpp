#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next; 
};

struct node* head = NULL;

void create()
{
    struct node *ptr,*temp;
    int n;
    cout<<"Enter the value"<<endl;    
    cin>>n;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"memory not allocated"<<endl;
    }
    ptr->data = n;
    ptr->next = NULL;
    
    if(head == NULL)
    {
        head = ptr;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

void display()
{
    struct node* temp;
    if(head ==NULL)
    {
        cout<<"Empty list"<<endl;
    }
    else
    {
        temp = head;
    cout<<"The values are:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    }
}

void insert_at_beg()
{
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    struct node * ptr;
    ptr = (struct node *) malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        cout<<"Size not allocated"<<endl;
        exit(5);
    }
    ptr->data=n;
    ptr->next=NULL;
    
        if(head==NULL)
        {
            head = ptr;
            
        }
        else
        {
        ptr->next = head;
        head = ptr;
        }
    
}

void insert_at_pos()
{
    struct node* ptr,*temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Out of memory"<<endl;
        return;
    }

    int pos,n;
    cout<<"Enter the position"<<endl;
    cin>>pos;
    cout<<"Enter the value to be entered"<<endl;
    cin>>n;

    ptr->data=n;
    ptr->next=NULL;
    if(pos==0)
    {
        ptr->next=head;
        head=ptr;
    }
    else
    {
        temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp = temp->next;
        if(temp==NULL)
        {
            cout<<"position exceeded limit"<<endl;
            return;
        }
    }
        ptr->next = temp->next;
        temp->next = ptr;
}
}

void delete_at_beg()
{ 
    struct node *temp;
    if(temp==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    else{
    temp=head;
    head=head->next;
    cout<<"The deleted element is "<<temp->data;
    free(temp);
    }
}

void delete_at_end()
{
    struct node *temp,*ptr;
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    else if(head->next ==NULL)
    {
        temp=head;
        head=NULL;
        cout<<"The deleted element is : "<<temp->data<<endl;
        free(temp);
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=NULL;
        cout<<"The deleted element was : "<<temp->data<<endl;
        free(temp);
    }

}

void delete_at_pos()
{   struct node *temp,*ptr;
    int pos;
    cout<<"Enter the position"<<endl;
    cin>>pos;
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else if (pos==0)
    {
        temp=head;
        head=head->next;
        cout<<"the deleted element was "<<temp->data<<endl;
        free(temp);
    }
    else
    {
        temp=head;
        for(int i=0;i<pos;i++)
        {
            ptr=temp;
            temp=temp->next;
            if(temp==NULL)
            {
                cout<<"Limit exceeded"<<endl;
                return;
            }
        }
        
        ptr->next=temp->next;   
        cout<<"The deleted element was : "<<temp->data;
        free(temp);    

    }
}
int main()
{
    int p;
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
