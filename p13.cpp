#include <iostream>
using  namespace std;
main()
{
string u="ali",name;
int p =123;
int i=3;
string course;
int choice,age;
for(int i=3; i<=3; i=i+1)
{
cout<<"enter username";
cin >> u;
}
{
cout<<" enter password";
cin >> p;
}
{
if(u=="ali" && p==123)
{
cout<<"login successfully";
cout<<endl;
}
else
{
cout<<"wrong details";
}
if (i==3 && u=="ali" && p==123)
cout<<"too many attempts";
cout<<endl;

return 0;
}

for(int i=1; i<=5; i=i+1)
{
cout<<"1. add student"<<endl;
cout<<"2. view student"<<endl;
cout<<"3. enter course"<<endl;
cout<<"4. exit"<<endl;

cout<<" enter choice";
cin >> choice;

if (choice ==1){
cout<<" ente name";
cin >> name;
cout<<" enter age";
cin >> age;
}
if(choice == 2){
cout<<name<<endl<<age;
}

    if (choice==3){
cout<<"enter course name";
}

if (choice==4){
cout<<" exit";
}
}
}
