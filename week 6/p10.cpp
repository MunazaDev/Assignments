#include<iostream>
using namespace std;
int main()
{
string word;
int sum=0;
cout<<" enter the word";
cin >> word;
for (int i=0; word[i]!='\0'; i++){
word[i]=word[i]+1;
}
cout<<word<<endl;
}