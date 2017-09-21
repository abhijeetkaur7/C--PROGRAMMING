#include<iostream>
using namespace std;
int main()
{
	int n,d,origNum,sum=0;
	cout<<"enter any positive number:"<<endl;
	cin>>origNum;
	n=origNum;
	while(n!=0)
	{
		d=n%10;
		sum+=d*d*d;
		n=n/10;
		
	}
	if(sum==origNum)
	cout<<"this is a armstrong number: ";
	else
	cout<<"not a armstrong number:";
	return 0;
}
