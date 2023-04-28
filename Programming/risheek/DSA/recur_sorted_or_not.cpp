#include <bits/stdc++.h>
using namespace std;

bool sorted(int *arr,int size)
{
     if(size==0 ||size==1)
     {
        return true;
     }
     if(arr[0]>arr[1])
     {
        return false;
     }
     else
     {
        bool remain=sorted(arr+1,size-1);
        return remain;
     }
}

int main() 
{
int arr[5]={1,9,3,4,5};
int ans =sorted(arr,5);
if(ans)
{
    cout<<"Is sorted"<<endl;
}
else
{
    cout<<"Not sorted"<<endl;
}
return 0;
}