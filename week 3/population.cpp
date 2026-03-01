#include <iostream>
using namespace std;

main(){

cout<<" no of people " <<endl;
int population;
cin>> population;
cout<<" no of births per month " <<endl;
int births ;
cin>> births ;
int total_population;
total_population = (births*12*30)+(population) ;
cout<< "population after 3 decades "<<total_population<< " . ";
}