#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
	int n;
	cout<<"enter a positive integer: ";
	cin>>n;
	cout<<"factorial of"<<n<<"="<<factorial(n);
	
}
int factorial(int n)
{
	if(n!=1)
	return n*factorial(n-1);
}
