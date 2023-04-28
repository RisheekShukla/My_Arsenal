#include <bits/stdc++.h>
using namespace std;

int SelectionSort(int arr[100],int n){
    for(int i=0;i<n-1;i++){
        int low=i;
        for(int j=i+1;j<n;j++){
           if(arr[j]<arr[low]){
            low=j;
           }
        }
          swap(arr[low],arr[i]);
    }
  
}

int main() 
{
  int arr[100],n;
  cout<<"Enter the size array "<<endl;
  cin>>n;
  cout<<"fill the elements in that array "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 SelectionSort(arr,n);
 for(int i=0;i<n;i++){
    cout<<arr[i];
 }

  }