#include <iostream>
using namespace std;

main(){

cout<<"Enter you Matric marks: "<<endl;
int matric;
cin>>matric;
cout<<" Enter your FSC. marks: "<<endl;
int FSC;
cin>>FSC;
cout<<" Enter ECAT marks:" <<endl;
int ECAT;
cin>>ECAT;
int Aggregate;
Aggregate = (10*matric)/1100+(40*FSC)/1200+(50*ECAT)/400;
cout<< "your aggregate is: " <<Aggregate<< "%" ;
}