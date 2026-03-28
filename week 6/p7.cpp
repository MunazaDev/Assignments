#include<iostream>
using namespace std;
int main(){
string word;
char letter;
bool isfound= false;
cout<<" enter the word";
cin >> word;
cout<<"enter the letter";
cin >> letter;
for(int i=0;word[i]!='\0';i++){
if(word[i]==letter)
if (isfound==true)
{
cout<<letter<<"is present in the word"<<word;
}
else{
cout<<letter <<" is present in the word "<<word;
}

}
}