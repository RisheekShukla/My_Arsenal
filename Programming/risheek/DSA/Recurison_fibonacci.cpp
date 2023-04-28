#include <bits/stdc++.h>
using namespace std;
int Fibo(int p){
    if(p==1 || p==0){
        return p;
    }
    return (Fibo(p-1)+Fibo(p-2));
}

int main() 
{   int n;
  cout<<"Enter the number till which you wanna your fibo end "<<endl;
  cin>>n;
  cout<<Fibo(n);
return 0;
}