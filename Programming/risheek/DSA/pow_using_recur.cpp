#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   double myPow(double x, int n) {
        if(n==0)
        {
            return 1;
        }
        else if(n>0)
        {
         return x*(myPow(x,n-1));
        }
        else
        {
            return 1/x*(myPow(x,n+1));
        }
   }
};
int main() 
{
Solution s1;
int x;
int n;
cin>>x>>n;
double R = s1.myPow(x,n);
cout<<R<<endl;
return 0;
}