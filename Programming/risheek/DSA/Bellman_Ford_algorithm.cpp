#include <bits/stdc++.h>
using namespace std;
class Solution
{ 
 public:
    void shortest_paths(vector<vector<int>>&grid,int n)
    {
        vector<int>dist(n,1e9);
        dist[0]=0;
        // realxing n-1 times
        for(int i=0;i<n-1;i++)
        {
            // for each value in the given vector of [u,v,wt]
            for(auto it:grid)
            {
                int u = it[0];
                int v = it[1];
                int wt = it[2];
                // if there exist a better distance and pvs dist of u should not be infinite
                if(dist[u]!=1e9 && dist[u]+wt<dist[v])
                {
                    dist[v] = dist[u]+wt; 
                }                
            }
        }
        // if negetive cycle exist then it will still reduce for nth traversal
        for(auto it:grid)
            {
                int u = it[0];
                int v = it[1];
                int wt = it[2];
                if(dist[u]!=1e9 && dist[u]+wt<dist[v])
                {
                    cout<<-1;
                }                
            }
        cout<<"The shortest distances from "<<endl; 
        for(int i=0;i<n;i++)
        {
            cout<<" 0 to "<<i<<" ---> "<<dist[i]<<endl;
        }
    }
};

// void addEdge(vector<pair<int,int>>adj[],int u,int v,int wt)
// {
//     adj[u].push_back({v,wt});
// }
int main() 
{
    int V=6;
    vector<vector<int>>grid = {{0,1,2},{0,3,5},{0,4,3},{1,0,3},{1,5,6},{1,2,2},{1,3,2},{2,5,1},{2,3,1},{3,4,1},{4,3,2}};
    Solution s1;
    s1.shortest_paths(grid,V);
return 0;
}