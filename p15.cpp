#include<iostream>
using namespace std;
main ()
{
int n,sum=0,a;
cout<<" enter the digit";
cin >> n;
while (n>0)
{
a=n%10;
sum=sum+a;
n=n/10;
}
cout<<sum;
}