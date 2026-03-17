#include <iostream>
using namespace std;

int main(){

int t1;
cout<<"enter temperature of first city ";
cin>>t1;
int t2;
cout<<"enter temperature of second city ";
cin>>t2;
int d1;
d1 = t1 - t2;
if(d1>10){
    cout<< "the temperature difference is too big.";
}
if(d1<10){
    cout<< "program ends.";
}
    return 0;
}