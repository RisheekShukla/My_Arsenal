#include <bits/stdc++.h>
using namespace std;
class Solution
{ 
 public:
    
    vector<int>shortestPath(int v,int e,vector<vector<int>>edges)
    {
        vector<pair<int,int>>adj[v];
        for(auto it:edges)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
      
    // using set
        set<pair<int,int>>ord_st;
        vector<int>dist(v);
        // distance initialized with infinity
        for(int i=0;i<v;i++) dist[i]=1e9;
        // src to src dist is 0
        dist[0]=0;
        ord_st.insert({0,0});
      
        while(!ord_st.empty()) 
        {
            auto it = *(ord_st.begin()); // st.begin() represents the address of the first element
            int dis = it.first;
            int node = it.second;
            ord_st.erase(it);
            for(auto it:adj[node])
            {
                int adjnode = it.first; 
                int edw = it.second; 
                
                if(dis+edw<dist[adjnode])
                {
                  // if a better distance is found then previosly evaluated distance
                    if(dist[adjnode]!=1e9)
                    {
                      // clear that pair from our set
                        ord_st.erase({dist[adjnode],adjnode});
                    }
                    dist[adjnode]=dis+edw;
                    ord_st.insert({dist[adjnode],adjnode});
                }
            }
        }
        return dist;
    }
};
int main() 
{
    int V = 8, E = 9;
    vector<vector<int>> edges = {{0, 1, 3},{1, 2, 3},{0, 2, 1},{1, 3, 1},{2, 4, 1},{3, 5, 4},{4, 5, 2},{5, 6, 2},{5, 7, 1}};
    Solution obj;
    vector<int> path = obj.shortestPath(V, E, edges);

    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << endl;
return 0;
}