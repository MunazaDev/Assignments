#include <iostream>
using namespace std;
int main()
{
string word;
cout<<" enter the word";
cin >> word;
for(int i=0; word[i] != '\0';i++)
{
cout<<"letter "<< word[i]<< " is at position: "<<endl;
}
}