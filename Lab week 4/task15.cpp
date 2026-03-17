#include <iostream>
using namespace std;

int main(){

float bill;
cout<<"enter bill amount:";
cin>>bill;
if(bill <= 5000){
    int discount = bill - (bill * 0.05);
    cout<< "your discounted bill is : "<<discount;
}
else{
    int discount = bill - (bill * 0.1) ;
    cout<< "your discounted bill is : "<<discount;
}
    return 0;
    }