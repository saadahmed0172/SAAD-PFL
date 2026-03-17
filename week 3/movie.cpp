#include <iostream>
using namespace std;

main(){

cout<<" name of movie " <<endl;
string name;
cin>> name;
cout<<" price of adult ticket " <<endl;
float price_adult ;
cin>> price_adult ;
cout<<"price of child ticket"<<endl;
float price_child;
cin>> price_child;
cout<<" no of adult tickets sold " <<endl;
float adulttickets ;
cin>> adulttickets ;
cout<<"no of child tickets sold"<<endl;
float childtickets;
cin>> childtickets;
cout<<"amount to be donated in charity in percent" <<endl; 
float percent;
cin>> percent;
float total_money ;
total_money = (price_adult*adulttickets) + (price_child*childtickets) ;
float donation;
donation = total_money*percent/100 ;
cout<< "total money earned "<<total_money<< " . ";
cout<< "amount to be donated "<<donation << " .";
}