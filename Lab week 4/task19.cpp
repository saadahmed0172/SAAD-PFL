
#include <iostream>
using namespace std;

int main(){

string n1;
cout<<"name of first brother ";
cin>>n1;
string n2;
cout<<"name of second brother ";
cin>>n2;
string n3;
cout<<"name of third brother ";
cin>>n3;
int a1;
cout<<"age of first brother:";
cin>>a1;
int a2;
cout<<"age of second brother:";
cin>>a2;
int a3;
cout<<"age of third brother:";
cin>>a3;
if(a1<a2 && a1<a3){
    cout<< "brother :"<<n1<<"is younger than other two:";
}
if(a2<a3 && a2<a1){
    cout<< "brother :"<<n2<<"is younger than other two:";
}
if(a3<a1 && a3<a2){
    cout<< "brother :"<<n3<<"is younger than other two:";
}
    return 0;
}