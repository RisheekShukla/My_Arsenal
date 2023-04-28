#include <bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>>&matrix,vector<vector<int>>&visited)
{   int m=matrix.size();
    int n=matrix[0].size();
    int arr[]={1,0,-1,0};
    int brr[]={0,1,0,-1};
    // queue me coordinates or distance hogi
    queue<pair<pair<int,int>,int>>qrr;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            // 1 se 1 ki distance zero hogi
            if(matrix[i][j]==1)
            {
                visited[i][j]=0; // ise answer ki jagah use kr rhe hai isilye 0 daal rhe hai
                qrr.push({{i,j},0});
            }
        }
    }
    // ordinary condition of bfs
    while(!qrr.empty())
    {
        int p = qrr.front().first.first;
        int q = qrr.front().first.second;
        int z = qrr.front().second;
        qrr.pop();
        // reach out the neighbours
        for(int i=0;i<4;i++)
        {
            int t = p + arr[i];
            int r = q + brr[i];
            // agar neighbour 0 hai aur unvisited hai to usme distance daalkr queue me push krde
            // taki uske baad bhi agar koi zero ho to wo bhi call ho jae
            if(t>=0 && r>=0 && t<m && r<n && matrix[t][r]==0 && !visited[t][r])
            {
                visited[t][r]=z+1;
                qrr.push({{t,r},z+1});
            }
        }
    }
}

vector<vector<int>> matrix_zero_one(vector<vector<int>>&matrix)
{
    vector<vector<int>> dummy = matrix;
    int m = matrix.size();
    int n = matrix[0].size();
    bfs(matrix,dummy);
    return dummy;
}

// hume given matrix ke base pr esa matrix banana hai jisme current element se 1 ki  distance nearest ho
int main() 
{
    int m,n;
    cout<<"Enter the value of m and n :";
    cin>>m>>n;
    vector<vector<int>>mat(m,vector<int>(n,0));
    cout<<"Enter the matrix"<<endl;;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    vector<vector<int>>answer = matrix_zero_one(mat);
    for(int p=0;p<m;p++)
    {
        for(int q=0;q<n;q++)
        {
            cout<<answer[p][q]<<" ";
        }
        cout<<endl;
    }
    // matrix_zero_one(mat);
    return 0;
}