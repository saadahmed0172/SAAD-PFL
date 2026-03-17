#include <iostream>
using namespace std;

int main(){

string name;
cout<<"write your name";
cin>>name;
if(name == "Ali"){
    cout<< "welcome "<<name;
}
if(name != "Ali"){
    cout<< "try again!";
}
    return 0;
}