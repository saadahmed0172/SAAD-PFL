#include <iostream>
using namespace std;

main(){

cout<<" imposter count " <<endl;
float imposter_count;
cin>> imposter_count;
cout<<" players count " <<endl;
float players_count ;
cin>> players_count ;
float chance;
chance = (100)*(imposter_count/players_count) ;
cout<< "chance of being an imposter "<<chance<< " % ";
}