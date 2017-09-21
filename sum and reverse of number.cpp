#include<iostream>
using namespace std;
 
int main() 
{ 
    int r=0,n,sum=0,d; 
    cout<<"Enter the number"; 
    cin>>n;
    while(n>0) 
    { 
      d=n%10; 
      sum=sum+d; 
      r=(r*10)+d; 
      n=n/10; 
    } 
    cout<<"\n sum of digits= "<<sum; 
    cout<<"\n Reverse= "<<r;
    return 0;
}
