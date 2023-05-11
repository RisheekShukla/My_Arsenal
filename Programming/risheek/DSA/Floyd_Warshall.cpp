#include <bits/stdc++.h>
using namespace std;
class Solution
{ 
 public:
    void shortest_distance(vector<vector<int>>&matrix)
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==-1)
                {
                    matrix[i][j]=1e9;
                }
                if(i==j)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(int via = 0;via<n;via++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    matrix[i][j] = min(matrix[i][j],matrix[i][via]+matrix[via][j]);
                }
            }
        }
        
    }
 
};

int main() {
    vector<vector<int>>grid = {{0,1,2},{0,3,5},{0,4,3},{1,0,3},{1,5,6},{1,2,2},{1,3,2},{2,5,1},{2,3,1},{3,4,1},{4,3,2}};
	int V = 6;
	vector<vector<int>> matrix(V, vector<int>(V, -1));
    for(auto it:grid)
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];
        matrix[u][v]=wt;
    }

	Solution obj;
	obj.shortest_distance(matrix);

	for (auto row : matrix) {
		for (auto cell : row) {
            if(cell==1e9)
            {
                cell=-1;
            }
			cout << cell << " ";
		}
		cout << endl;
	}

	return 0;
}