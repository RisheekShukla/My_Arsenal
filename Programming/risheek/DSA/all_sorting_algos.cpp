#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    //selecting element for their perfect place
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        int tv;
        tv=arr[min];
        arr[min]=arr[i];
        arr[i]=tv;
    }
}

int main() 
{
int arr[]={8,6,7,4,2,5,9};
int n=sizeof(arr)/sizeof(arr[0]);
selection_sort(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}