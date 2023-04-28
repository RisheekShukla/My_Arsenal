#include <bits/stdc++.h>
using namespace std;

int main() 
{   vector<int> arr;
int n,k;
    int tc,p,r,s;
   cin>>tc;
    while(tc--){

        cin>>n>>k;
         for(int i=0;i<n;i++){
             cin>>p;
             arr.push_back(p);
         }

    for(int i=0;i<n;i++){
            if(k==arr[i]){
              r=i;
              break;
            }
            
    }
    for(int i=n-1;i>=0;i--){
            if(k==arr[i]){
              s=i;
                   break;
            }
        }  
    cout<<r<<" "<<s<<endl;
    }
return 0;
}