#include <bits/stdc++.h>
using namespace std;

bool Lsearch(int arr[],int size,int val){
    for(int i=0;i<size;i++){
        if(arr[i]==val){
           return 1;
        }
    }
    return 0;
}

int main() 
{  int arr[300],n,key;
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
cout<<"\nEnter the number to search it"<<endl;
cin>>key;
bool find=Lsearch(arr,n,key);
if(find){
    cout<<"Present"<<endl;
}
else cout<<"absent"<<endl;
return 0;
}