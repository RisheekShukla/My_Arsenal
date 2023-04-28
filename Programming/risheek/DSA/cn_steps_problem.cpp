#include <bits/stdc++.h>
using namespace std;

long long countDistinctWays(long long nStairs) {
    if(nStairs<0){
        return 0 ;
    }
    if(nStairs==0){
        return 1;
    }
    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
}

int main() 
{
    long long n;
    cout<<"Enter the final count of steps"<<endl;
    cin>>n;
    cout<<"The number of ways are "<<countDistinctWays(n)<<endl;
return 0;
}