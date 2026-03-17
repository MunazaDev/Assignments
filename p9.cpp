#include<iostream>
using namespace std;
main ()
{
int no_1 = 0,no_2 = 1,result,n;
cout<< " enter the number: ";
cin >> n;
cout<<no_1<<",";
cout<<no_2;
for(int i=1; i<n-1; i=i+1){
result=no_1+no_2;
cout<<","<<result;
no_1=no_2;
no_2=result;
}
} 
