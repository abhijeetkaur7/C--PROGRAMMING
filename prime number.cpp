#include<iostream>
using namespace std;
int main()
{
	int i,num;
		cout<<"enter any num";
		cin>>num;
		if(num==1)
		{
			cout<<"smallest prime num is 2";
	}
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				cout<<"not prime num";
				break;
			}
		}
		if(num==i)
	{
	cout<<"prime num";	
	}
	return 0;
}
