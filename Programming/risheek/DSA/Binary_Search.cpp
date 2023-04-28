#include <bits/stdc++.h>
using namespace std;

void Displayarray(int arr[],int size){
       cout<<"Elements of the aray are : "<<endl;
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" "<<endl;
}
}

int BinarySearch(int arr[],int size,int key){
    int mid,start,end;
    start=0; end=size-1;
    mid=(end+start)/2;
    
    while(start<=end){
    /* is technique se hamari jo key hogi vo kabhi na kabhi
    mid ho hi jaegi . And then 1st condition apply ho jaegi*/
    if(arr[mid]==key){
       return mid;
    }
    else if(key<arr[mid]){
                end=mid-1;
              }
    else{
        start=mid+1;

           }

     mid=(start+end)/2;
    }
    return -1;
}

int main() 
{
   int arr[1000],key,size;
   cout<<"ENTER THE SIZE"<<endl;
   cin>>size;
   cout<<"Enter the elements in ascending order"<<endl;
   for(int i=0;i<size;i++){
    cin>>arr[i];
   }

   Displayarray(arr,size);
   cout<<"Enter the value to search"<<endl;
   cin>>key;
   int index=BinarySearch(arr,size,key);   
   cout<<"It is present at index "<<index<<endl;
return 0;
}