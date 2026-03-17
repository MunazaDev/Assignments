#include <iostream>
using namespace std;
main()
{
int no,digit,f=0;
cout<<"enter the number";
cin >> no;
cout<<" ener the digit";
cin >> digit;
for(no!=0;no =no/10;)
{ 
 if (no%10==digit){
f=f+1;
}
cout<<"frequency"<<f<<endl;
return 0;
}
}