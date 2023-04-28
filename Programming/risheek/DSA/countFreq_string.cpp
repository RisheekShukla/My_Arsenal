#include<bits/stdc++.h>
using namespace std;

void countFreq(string s)
{
    vector <bool> flag(s.length(),false);
    for(int i=0;i<s.length();i++)
    {
        if(flag[i]==true)
        {
            continue;
        }
        int count= 1;
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                flag[j]=true;
                count++;
            }
        }
        cout<<s[i]<<"--------->"<<count<<endl;
    }
}
int main()
{
    string s="abbcccdddd";
    countFreq(s);
}