#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a;
 vector <int> v;
 for(int i=0;i<5;i++){
    cin>>a;
    v.push_back(a);
 }
 for(auto a=v.begin();a<v.end();a++){
    cout<<*a<<endl;
 }
return 0;
}