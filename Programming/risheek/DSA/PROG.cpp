// take a four digit number let 1441  
// rev of it is 1441
// x = greater - smaller == 0 
// hide one digit from x 
#include <bits/stdc++.h>
using namespace std;

void predict(int a,int b,int c)
{
    int s = a-c;
    if(s>b)
    {
       cout<<"The hidden value could be : "<<sqrt(pow((s+b),2))<<endl;
    }
    else
    {
       cout<<"The hidden value could be : "<<sqrt(pow((s-b),2))<<endl;
        
    }
}

int sum(int num)
{
    int a,b,c;
    int count=0;
    while(num!=0)
    {
        ++count;
        int ld = num%10;
        if(count==1)
        {
            a = ld;
        }
        else if(count==2)
        {
            b = ld;
        }
        else
        {
            c=ld;
        }
        num=num/10;
    }
    predict(a,b,c);
}

int subtract(int num,int rev)
{
    int sub;
    if(rev>=num)
    {
        sub = rev-num;
    }
    else
    {
        sub = num-rev;
    }
    return sub;
}

void finally(int s,int ns)
{
    cout<<"The hidden value is : "<<s-ns<<endl;
}

int main() 
{
    // cout<<"Enter the nr of digit"<<endl;
    // int dig;
    // cin>>dig;
    int num;
    cout<<"Assume a 4 digit number"<<endl;
    cout<<"Now make it reverse"<<endl;
    cout<<"Subtract greater number from smaller number"<<endl;
    cout<<"hide any one digit and enter that number : ";
    cin>>num;
    sum(num);
    // int less;
    
    // cout<<"Enter a number : ";
    // int n;
    // cin>>n;

    // cout<<"Enter the reverse of it  : ";
    // int rev;
    // cin>>rev;

    // int ps = subtract(n,rev);
    
    
    
    // int s = sum(ps);
    // int ns = sum(less);
    // finally(s,ns);
     
return 0;
} 