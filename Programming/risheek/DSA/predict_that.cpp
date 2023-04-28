#include <bits/stdc++.h>
using namespace std;
class Solution {
    int sumr=0;
public:
    void letssum(int hnum)
    {
        while(hnum>0)
        {
            int ld = hnum%10;
            sumr = sumr + ld;
            hnum=hnum/10;
        }
    }
    void predict()
    {
        if(sumr%9==0)
        {
            char s;
            cout<<"I could smell that number , but  I need a help \n tell me is it greater than 5 (Y/N) ? "<<endl;
            cin>>s;
            if(s=='Y')
            {
               cout<<"That number was 9"<<endl; 
            }
            else
            {
                cout<<"Hiding 0 from me, not a chance"<<endl;
            }
        }
        else
        {
            int rem = sumr%9;
            cout<<"That number was "<<9-rem<<endl;
            
        }
    }

};
int main() 
{
    int hnum;
    cout<<"Assume a four digit number"<<endl;
    cout<<"Now reverse that number"<<endl;
    cout<<"Do a thing , subtract the greater number from smaller one"<<endl;
    cout<<"Okay that's the game , Now hide a digit of it & enter the number here :";
    cin>>hnum;
    Solution s1;
    s1.letssum(hnum);
    s1.predict();

return 0;
}