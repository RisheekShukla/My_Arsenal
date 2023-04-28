#include<bits/stdc++.h>
using namespace std;
/*class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> newarray;
        int numb=0;
        int p;
        int k=digits.size()-1;
        for(auto i = 0 ; i < digits.size() ; i++)
        {
            p=pow(10,k);
            numb=numb+(digits[i]*p);
            k--;
        }
        numb=numb+1;
        while(numb!=0)
        {
            int dig = numb % 10;
            newarray.push_back(dig);
            numb=numb/10;
        }
        reverseit(newarray);
     return newarray;   
    }
    void reverseit (vector<int> &vect)
    {
      reverse(vect.begin(),vect.end());
    }
};*/
int themain(int *arr,int i,int n) // i=1 , n=4
{  
   if(i>=n)
    {
        return 0;
    }
    arr[n-1-i] += 1; 
  if(arr[n-1-i]==10)
  {
    arr[n-1-i]=0; 
    i = i+1;
    themain(arr,i,n);          
  }
  
}

int main()
{
 int arr[]={9,9,9,9};
 int i=0;
  int n=sizeof(arr)/sizeof(arr[0]);
  themain(arr,i,n);
  for(int i=0 ; i<n; i++)
  {
    cout<<arr[i];
  }
}