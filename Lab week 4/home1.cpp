#include <iostream>
using namespace std;

int main(){

string c1;
cout<<"write your country name  ";
cin>>c1;
int t1 ;
cout<<"ticket price in dollars  ";
cin>>t1;
if(c1 == "Ireland"){
    int t2 = (t1 * 0.1) - t1;
    cout<< "the ticket price in Ireland is:"<<t2;
}
else{
    int t2 = (t1 * 0.05) - t1;
    cout<< "the ticket price in "<<c1<<" is:"<<t2;
}
    return 0;
}