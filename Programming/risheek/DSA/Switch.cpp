#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int amount;
  int R100,R50,R20,R10,R1;
  cout<<"ENTER THE AMOUNT"<<endl;
  cin>>amount;
  switch(1){
    case 1:
    R100=amount/100;
    amount=amount%100;
    cout<<"Rupee 100 notes are "<<R100<<endl;
    case 2:
    R50=amount/50;
    amount=amount%50;
    cout<<"Rupee 50 notes are "<<R50<<endl;
    case 3:
    R20=amount/20;
    amount=amount%20;
    cout<<"Rupee 20 notes are "<<R20<<endl;
    case 4:
    R10=amount/10;
    amount=amount%10;
    cout<<"Rupee 10 notes are "<<R10<<endl;
    case 5:
    R1=amount/1;
    amount=amount%1;
    cout<<"Rupee 1 notes are "<<R1<<endl;
  }
return 0;
}