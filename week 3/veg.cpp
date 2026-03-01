#include <iostream>
using namespace std;

main(){

cout<<" vegetable price per kg in coins " <<endl;
float veg;
cin>> veg;
cout<<" fruit price per kg in coins " <<endl;
float fru ;
cin>> fru ;
cout<<"total kg of vegetables"<<endl;
int kgveg;
cin>> kgveg;
cout<<" total kg of fruits " <<endl;
int kgfru ;
cin>> kgfru ;
float money;
money = (veg*kgveg+fru*kgfru)/1.94 ;
cout<< "money in rupees "<<money << " .";
}