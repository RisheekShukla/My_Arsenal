#include <bits/stdc++.h>
using namespace std;

int main() 
{
int arr[20],n;
  int min,max;
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
  
  min=arr[0];
for(int i=0;i<n;i++){
  
  
    if(min>=arr[i]){
        min=arr[i];
    }
}
cout<<"\nThe minimum number is "<<min<<endl;
 
   max=arr[0];
for(int i=0;i<n;i++){
  
 
    if(max<=arr[i]){
        max=arr[i];
    }
}
cout<<"The maximum number is "<<max<<endl;
return 0;
}