#include <iostream>
using namespace std;

int main(){

int wrose;
cout<<"enter the number of white rose:";
cin>>wrose;
int rrose;
cout<<"enter the number of red rose";
cin>>rrose;
int tulip;
cout<<"enter the number of tulip";
cin>>tulip;
float bill = (wrose * 4.1) + (rrose * 2.00) + (tulip * 2.50);
if(bill > 200){
    int bill2 = bill - (bill * 0.2);
    cout<< "Original price of the bill is : "<<bill<<endl;
    cout<< "Discounted price of the bill is : "<<bill2;
}
if(bill <= 200){
    cout<< "Original price of the bill is : "<<bill<<endl  ;
}
    return 0;
}