#include <bits/stdc++.h>
using namespace std;
class Solution
{ 
 
public:
 
    void shortest_paths(vector<vector<int>>&grid,int n)
    {
        vector<int>dist(n,1e9);
        dist[0]=0;
        for(int i=0;i<n;i++)
        {
            for(auto it:grid)
            {
                int u = it[0];
                int v = it[1];
                int wt = it[2];
                if(dist[u]!=1e9 && dist[u]+wt<dist[v])
                {
                    dist[v] = dist[u]+wt; 
                }                
            }
        }
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
    int n=6;
    // vector<pair<int,int>>adj[n];
    // addEdge(adj,3,2,6);
    // addEdge(adj,5,3,1);
    // addEdge(adj,0,1,5);
    // addEdge(adj,1,5,-3);
    // addEdge(adj,1,2,-2);
    // addEdge(adj,3,4,-2);
    // addEdge(adj,2,4,3);
    vector<vector<int>>grid = {{3,2,6},{5,3,1},{0,1,5},{1,5,-3},{1,2,-2},{3,4,-2},{2,4,3}};
    Solution s1;
    s1.shortest_paths(grid,n);
return 0;
}