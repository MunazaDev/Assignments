#include <iostream>
using namespace std;
int main ()
{
int no[5]={1,2,3,4,5};
int sum=0;
int average=0;
for(int i=0 ;i<5;i++){
sum=sum+no[i];

average=sum/5;
}
cout<<"sum " <<sum<<endl;
cout<<"average " <<average<<endl;
}