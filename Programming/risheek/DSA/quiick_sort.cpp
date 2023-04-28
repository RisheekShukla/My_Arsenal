#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e)
{
    //pivot banaya
    int pivot=arr[s];
    //count banaya
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    // pivotindex banaya
    int pivotindex = s + count;
    swap(arr[pivotindex],arr[s]); //@@@@@@@
    //left and right side sambhalna hai
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<=pivotindex && j>=pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int arr[],int s,int e)
{
    //base case  @@@@@@@
    if(s>=e)
    {
        return ;
    }
    int p = partition(arr,s,e);
    //left side
    quicksort(arr,s,p-1);
    //right side
    quicksort(arr,p+1,e);
}


int main() 
{
   int arr[1000],s=0;
   int n,e;
   cout<<"Enter the size"<<endl;
   cin>>n;
   e=n-1;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   quicksort(arr,s,e);
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
return 0;
}