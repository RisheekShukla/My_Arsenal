#include <bits/stdc++.h>
using namespace std;

void Countfreq(int arr[],int n)
{
    int count ;
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++)
    {
        if(visited[i]==true)
        {
            continue;
        }
        count = 1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                visited[j]=true;
            }
        }

    cout<<arr[i]<<" "<<count<<endl;
    }
}

int main() 
{
    int arr[] = {10,5,15,10,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Countfreq(arr,n);
return 0;
}