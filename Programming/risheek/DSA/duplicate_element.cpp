#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int arr[10],n;
  
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
int alt=arr[0];
for(int i=0;i<n;i++){
    alt=alt^arr[i+1];
}
  if(alt==0){
      cout<<"\nThe duplicate element is "<<alt;
    }
    else{
        cout<<"no duplicate elements"<<endl;
    }

return 0;
}