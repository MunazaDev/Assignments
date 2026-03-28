#include <iostream>
using namespace std;
int main ()
{
int n;
cout<<"enter the number n" ;
cin >> n;
int no[n];
cout<<"enter " << n <<" numbers " ;
for(int i=0; i<n;i++){
cin >> no[i];
}
for(int i=0;i<n; i++){
cout<<no[i]<<endl;
}
}