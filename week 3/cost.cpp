#include <iostream>
using namespace std;

main(){

cout<<" weight of fertilizer bag in pounds " <<endl;
float weight;
cin>> weight ;
cout<<" cost price in dollars " <<endl;
float cost ;
cin>> cost ;
cout<<"Area covered by bag in sq ft"<<endl;
float area;
cin>> area;
float price_pound ;
price_pound = cost/weight ;
float price_sqft;
price_sqft = cost/area ;
cout<< "cost per pound "<<price_pound<< " . ";
cout<< "cose per sq ft "<<price_sqft << " .";
}