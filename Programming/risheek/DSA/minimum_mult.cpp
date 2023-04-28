#include <bits/stdc++.h>
using namespace std;
class Solution
{ 
 
public:

    int mini_mult(vector<int> &arr,int src,int dest)
    {
        vector<int>distance(100000,1e9);
        int mod =100000;
        queue<pair<int,int>>qrr;
        qrr.push({src,0});
        distance[src]=0;
        while(!qrr.empty())
        {
            int node = qrr.front().first;
            int dist = qrr.front().second;
            qrr.pop();
            for(auto it:arr)
            {
                int adjnode = (it * node) % mod;
                if(dist+1<distance[adjnode])
                {
                    distance[adjnode]=dist+1;
                    if (adjnode == dest)return dist+1;
                    qrr.push({adjnode,dist+1}); 
                }
            }
        }
        return -1;
    }
 
};
int main() 
{
    vector<int>arr = {2,5,7};
    int src = 3;
    int dist = 30;
    Solution s1;
    int ans = s1.mini_mult(arr,src,dist);
    cout<<ans;
return 0;
}