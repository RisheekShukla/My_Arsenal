#include <bits/stdc++.h>
using namespace std;

void hanoi( int n,char A,char B,char C) 
{
    if(n<=0)
    {
        cout<<"Invalid input"<<endl;
    }
    if(n==1)
    {
        cout<<A<<"--->>>"<<C<<endl;
    }
    else
    {
        hanoi(n-1,A,C,B);
        hanoi(1,A,B,C);
        hanoi(n-1,B,A,C);
    }
}
int main() 
{
int n;
cout<<"Enter number of disks"<<endl;
cin>>n;
hanoi(n,'A','B','C');
return 0;
}