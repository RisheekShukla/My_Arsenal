#include <bits/stdc++.h>
using namespace std;

void Bubsort(int *arr,int n)
{
    if(n==0||n==1)
    {
        return ;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    Bubsort(arr,n-1);
}
int main() 
{

int arr[111],n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
Bubsort(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}