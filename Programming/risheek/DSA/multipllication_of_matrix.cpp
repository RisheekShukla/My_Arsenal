#include <bits/stdc++.h>
using namespace std;
class MULTIPLICATION {
     
public:
  
  int product(int x[3][3],int y[3][3]){
    int res[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                res[i][j]=x[i][j]*y[j][i];
            }
        }
    }
  }

};
int main() 
{
   int a[3][3],b[3][3];
   cout<<"Enter the elemtents of matrix A"<<endl;
   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        cin>>a[i][j];
      }
   }
   cout<<"Enter the elements of matrix B"<<endl;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>b[i][j];
    }
   }
   MULTIPLICATION m1;
   m1.product(a[],b[]);
return 0;
}