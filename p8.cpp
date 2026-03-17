#include<iostream>
using namespace std;
main ()
{
int number,sol=0;
cout<<" enter the number";
cin >> number;
for(int i=number;i>0;i=i/10){
sol=sol+1;}
cout<< " total digits are "<<sol;
}
