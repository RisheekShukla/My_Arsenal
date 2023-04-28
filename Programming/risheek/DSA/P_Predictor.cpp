
#include <iostream>

using namespace std;

int main()
{
    string s1;
	string s2;
    cout<<"Enter your Name : ";
    cin>>s1;
    cout<<"Enter your partner's(future) name : ";
	cin>>s2;
	int count1=0;
	int count2=0;
	for(int i=0;i<s1.size();i++)
	{
	    count1=count1+s1[i]-'a'+1;
	}
	cout<<endl;
	for(int i=0;i<s2.size();i++)
	{
	    count2=count2+s2[i]-'a'+1;
	}
	int maxnum = max(count1,count2);
	int minnum = min(count1,count2);
	float val = float(minnum)/float(maxnum);
	int ptage = val*100;
    if(ptage>75)
    {
	    cout<<"Congrats !! You both are matched  "<<ptage<<"%"<<endl;
    }
    else if(ptage>50)
    {
        cout<<"Not Bad! Mathing matching percentage "<<ptage<<"%"<<endl;
    }
    else if(ptage>25)
    {
        cout<<"Try Someone Else ,  Mathing only  "<<ptage<<"%"<<endl;
    }
    else
    {
        cout<<" Sorry! Not made for you , Mathing is only "<<ptage<<"%"<<endl;
    }
	return 0;
}
