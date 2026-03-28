#include <iostream>
using namespace std;
int main (){
int n;
int largest;
cout<<"enter the number n" ;
cin >> n;
int no[n];
cout<<"enter"<<n<<"numbers";
for(int i=0;i<n;i++){
    cin >> no[i];
if(no[i]>largest)
{
largest = no[i];
}
cout<<" largest no is "<< largest ;
}
}
