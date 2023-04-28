#include<iostream>
using namespace std;

void merge(int *arr,int s,int e)
{
    int mid=s+(e-s)/2;
    int len1=mid+1-s;
    int len2=e-mid;
    //make two new array
    int *first = new int[len1];
    int *second = new int[len2];
    //fill both arrays one by one
    int main_array =s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[main_array++];
    }
    main_array=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[main_array++];
    }
    // finally merge
     main_array=s;
    int ind1=0,ind2=0;
    while(ind1<len1 && ind2<len2)
    {
        if(first[ind1]<second[ind2])
        {
            arr[main_array++]=first[ind1++];
        }
        else
        {
            arr[main_array++]=second[ind2++];
        }
    }
    while(ind1<len1)
    {
        arr[main_array++]=first[ind1++];
    }
    while(ind2<len2)
    {
        arr[main_array++]=second[ind2++];
    }
}
void mergesort(int *arr,int s,int e)
{
    //base case
    if(s>=e)
    {
        return ;
    }
    //make mid
    int mid=s+(e-s)/2;
    //make left side array
    mergesort(arr,s,mid);
    //make right side array
    mergesort(arr,mid+1,e);
    //merge call
    merge(arr,s,e);
}

int main()
{
    int arr[1000];
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int s=0,e=size-1;
    mergesort(arr,s,e);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}