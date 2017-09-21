#include<iostream>
using namespace std;

int main()
{
	int Arr[100],n,i,large,small;
	
	cout<<"enter number of elements  to insert";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		 cout<<"enter element" <<i+1<<":";
		 cin>>Arr[i];
		 
	}
small=Arr[0];
large=Arr[0];

for(i=1;i<n;i++)
{
	if(Arr[i]<small)
	  small=Arr[i];
  if (Arr[i]>large)
  large=Arr[i];
  
}
cout<<"largest element is :"<<large<<endl;
cout<<"smallest element is :"<<small<<endl;

return 0;

}
