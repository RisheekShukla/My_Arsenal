#include <bits/stdc++.h>
using namespace std;

// This is a Brute Force approach O(n^2)
// bool checkit(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// This approach is more efficient approach O(n) 
bool checkit(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(*(arr+i)>*(arr+i+1))
        {
            return false;
        }
    }
    return true;
}

// 3 4 5 1

int main() 
{
    int n=5;
    int arr[]={3,4,5,1,2};
    // vector<int>brr = {3,4,5,1,2};
    if(checkit(arr,n))
    {
        cout<<"Yes it was sorted"<<endl;
    }
    else
    {
        cout<<"No it wasn't"<<endl;
    }
return 0;
}