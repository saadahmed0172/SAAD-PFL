#include <iostream>
using namespace std;

int main(){

int speed;
cout<<"enter the speed of car in km/h :";
cin>>speed;
if(speed > 100){
    cout<< "Halt....YOU WILL BE CHALLANED!!!";
}
else{
    cout<< "Perfect! You are good going.";
}
    return 0;
}