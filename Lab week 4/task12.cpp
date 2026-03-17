#include <iostream>
using namespace std;

int main(){

int n1;
cout<<"write a number";
cin>>n1;
int n2;
cout<<"write another number";
cin>>n2;
if(n1>n2){
    cout<< "the number:"<<n1<<"is greater than:"<<n2;
}
else{
    cout<< "the number:"<<n2<<"is greater than:"<<n1;
}
    return 0;
}