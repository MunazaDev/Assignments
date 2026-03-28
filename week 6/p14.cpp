#include <iostream>
using namespace std;
int main (){
int n;
int large=0;
int small=0;
cout<<"enter the number n" ;
cin >> n;
int no[n];
cout<<"enter"<<n<<"numbers";
for(int i=0;i<n;i++){
    cin >> no[i];
if(no[i]>large)
no[i]=large;
cout<<no[i] <<" is the largest ";
 if(no[i]<small)
small=no[i];cout<<large<<" is the largest"<<endl;
 cout<<small<< " is the smallest";
}
}
