#include <bits/stdc++.h>
using namespace std;
int main() 
{
int arr[300],n,sum=0;
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
for(int i=0;i<n;i++){
   sum=sum+arr[i];
}
cout<<"\nThe sum is "<<sum<<endl;
return 0;
}