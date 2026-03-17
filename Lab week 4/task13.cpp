#include <iostream>
using namespace std;

int main(){

string word1;
cout<<"write a word:";
cin>>word1;
string word2;
cout<<"write another word:";
cin>>word2;
if(word1 == word2){
    cout<< "yes the words are same";
}
else{
    cout<< "no the words are different";
}
    return 0;
}