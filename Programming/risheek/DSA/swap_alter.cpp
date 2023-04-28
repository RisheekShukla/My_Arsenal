#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[],int n){
    cout<<"now array is "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

int main() 
{
 int arr[300],n;
cout<<"ENTER THE SIZE"<<endl;
cin>>n;
cout<<"FILL THE ELEMENTS"<<endl;
for(int i=0;i<n;i++){
   cin>>arr[i];
}
cout<<"filled up array is "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
if(n%2==0){
    int i=0;
    int temp;
    while(i<n)  {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i=i+2;
    }
}
else{
     int i=0;
    int temp;
    while(i<n-1)  {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i=i+2;
    }
}
PrintArray(arr,n);


return 0;
}