#include <bits/stdc++.h>
using namespace std;

int REverse(string &s,int i,int j)
{
    if(i>j)
    {
        return 0;
    }
   swap(s[i],s[j]);
    i++;
    j--;
    return REverse(s,i,j);
}

int main() 
{
    string s;
    cout<<"Enter the string to reverse"<<endl;
    cin>>s;
    int i=0;
    int j=s.size()-1;
   REverse(s,i,j);
    cout<<"string after replacement is "<<s;
return 0;
}