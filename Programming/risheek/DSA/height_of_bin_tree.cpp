#include <bits/stdc++.h>
using namespace std;



class SOLUTION
{
    public:
    int height_of_tree(vector<int>adj[],int root)
    {
        int size  = adj->size();
        vector<int>vis(size,0);
        queue<int>qrr;
        qrr.push(root);
        int count=1;
        vis[root]=1;
        while(!qrr.empty())
        {
            int val = qrr.front();
            qrr.pop();
            for(int it:adj[val])
            {
                if(!vis[it])
                {
                    qrr.push(it);
                    vis[it]=1;
                }
            }
            count++;
        }
        return count;
    }


};

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{
    vector<int>adj[7];
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,4,2);
    addEdge(adj,2,5);
    addEdge(adj,5,6);
    int root=1;
    SOLUTION s1;
    int ans = s1.height_of_tree(adj,root);
    cout<<"The height of tree " << ans<<endl;
    return 0;
}