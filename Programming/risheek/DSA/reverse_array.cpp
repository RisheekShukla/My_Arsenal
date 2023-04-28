#include <bits/stdc++.h>
using namespace std;
vector <int> reverse(vector <int> v){
    int start=0,end=v.size()-1;
    while(start<=end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}

void display(vector<int>n){
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<endl;
    }
}
int main() 
{
  vector <int> v;
  v.push_back(13);
  v.push_back(5);
  v.push_back(7);
  v.push_back(12);
  v.push_back(3);
  v.push_back(2);
  vector <int> newarr = reverse(v);
  display(newarr);
return 0;
}