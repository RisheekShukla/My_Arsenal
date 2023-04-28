#include <bits/stdc++.h>
using namespace std;
#include <vector>
int main() 
{
   vector <int> v ;
   int n ;
   cin >> n ;
   for(int i=0 ;i<n ;i++)
   {
    int ele ;
    cin >> ele ;
    v.push_back(ele);
   }
   
   vector <int> :: iterator it ;
   for(it = v.begin() ; it!=v.end() ; it++)
   {
     cout << *it ;
   }



}