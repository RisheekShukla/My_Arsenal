// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define MAX 3
int arr[MAX];
int top=-1;

void s_push()
{
    if(top==MAX-1)
    {
    cout<<"stack overflow"<<endl;
    }
    else
    {
    int s;
    cout<<"Enter the value : ";
    cin>>s;
        arr[++top]=s;
    }
}

void s_pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        
        cout<<"Popped element : "<<arr[top]<<endl;
        arr[top--]=NULL;
    }
}

void s_peek()
{
    if(top==-1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        
        cout<<"Peek is : "<<arr[top]<<endl;
    }
}

void s_display()
{
    if(top==-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
      int p=top;
      while(p!=-1)
      {
          cout<<arr[p--]<<" "<<endl;
      }
    }
}

int main() {
    int a;
 while(1)
 {
    cout<<"==========================<< Menu >>============================="<<endl;
    cout<<" 1.push "<<endl;
    cout<<" 2.pop "<<endl;
    cout<<" 3.peek "<<endl;
    cout<<" 4.display "<<endl;
    cout<<" 5.exit "<<endl;
    cout<<"Enter a choice : ";
    cin>>a;
    switch(a)
    {
        case 1:
        s_push();
        break;
        case 2:
        s_pop();
        break;
        case 3:
        s_peek();
        break;
        case 4:
        s_display();
        break;
        case 5:
        exit(0);
        break;
    }
}
    return 0;
}