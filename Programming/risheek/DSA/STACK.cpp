#include <bits/stdc++.h>
using namespace std;
int top= -1;
int stck[10];
void push()
{
    if(top==9)
    {
      cout<<"stack overflow"<<endl;
    }
    else
    {
      int v;
      cout<<"Enter the value"<<endl;
      cin>>v;
      top++;
      stck[top]=v;
    }
}

void pop()
{
  if(top==-1)
  {
    cout<<"Stack underflow"<<endl;
  }
  else
  {
    cout<<" popped element is : "<<stck[top]<<endl;
    top--;
  }
}

void peak()
{
  if(top==-1)
  {
    cout<<"Stack underflow"<<endl;
  }
  else
  {
    cout<<" peak is : "<<stck[top]<<endl;
  }
}

void display()
{
  int i=top;
  if(top==-1)
  {
    cout<<"stack is empty"<<endl;
  }
  for(int p=i;p>=0;p--)
  {
    cout<<stck[p]<<" ";
  }
}
  

int main() 
{
 
  int n;
  while(1)
  {
  cout<<"\n---------------< MENU >-------------------"<<endl;

  cout<<"1.PUSH"<<endl;
  cout<<"2.POP"<<endl;
  cout<<"3.PEAK"<<endl;
  cout<<"4.DISPLAY"<<endl;
  cout<<"5.EXIT"<<endl;
  cout<<"Enter the choice"<<endl;
  cin>>n;
  switch(n)
  {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peak();
        break;
    case 4:
        display();
        break;
    case 5:
        exit(0);
        break;
  }
  }
return 0;
}