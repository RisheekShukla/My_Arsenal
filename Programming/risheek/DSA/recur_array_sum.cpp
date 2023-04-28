#include <bits/stdc++.h>
using namespace std;
int sum_recur(int *arr,int n)
{
   if(n==1)
   {
    return arr[0];
   }
 return arr[n-1]+sum_recur(arr,n-1);
}
int main() 
{
int arr[6]={1,2,3,4,5,6};
int ans=sum_recur(arr,6);
cout<<"The sum of array is "<<ans<<endl;
return 0;
}