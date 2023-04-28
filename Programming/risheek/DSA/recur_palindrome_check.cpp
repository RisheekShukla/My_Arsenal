#include <bits/stdc++.h>
using namespace std;

bool isPalin(string &s,int i,int j)
{
    if(i>j)
    {
        return true;
    }
   if(s[i]!=s[j])
   {
    return false;
   }
    return isPalin(s,i+1,j-1);
}

int main() 
{
    string s;
    cout<<"Enter the string to reverse"<<endl;
    cin>>s;
    int i=0;
    int j=s.size()-1;
   if(isPalin(s,i,j))
   {
    cout<<"Yes it is a Palindrome"<<endl;
   }
   else
   {
        cout<<"Not a palindrome"<<endl;
   }
return 0;
}