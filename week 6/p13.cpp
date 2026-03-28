#include <iostream>
using namespace std;
int main (){
int n;
int sum=0;
cout<<"enter the number n" ;
cin >> n;
int no[n];
cout<<"enter"<<n<<"numbers";
for(int i=0;i<n;i++){
    cin >> no[i];
sum=sum+no[i];
}
cout<<"sum is "<<sum;
}