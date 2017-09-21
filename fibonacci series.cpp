#include<iostream>
using namespace std;
int main()
{

int i,no,first=0,second=1,next;


cout<<"enter number of terms of series:";
cin>>no;
cout<<"fibonaci series are: "<<endl;
for(i=0;i<no;i++)
{
cout<<"\n"<<first;
next=first+second;
first=second;
second=next;	
}
return(0);
}
