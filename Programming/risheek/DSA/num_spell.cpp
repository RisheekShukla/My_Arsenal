#include <bits/stdc++.h>
using namespace std;

int prom(int n,string arr[]){
    if(n==0){
        return 0;
    }
    int digit = n%10;
    n=n/10;
    prom(n,arr);
    cout<<arr[digit]<<" ";
    
    }
 

int main() 
{
  string arr[10]={
        "ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"
    };
    int n;
    cout<<"ENTER n"<<endl;
    cin>>n;
    prom(n,arr);

return 0;
}