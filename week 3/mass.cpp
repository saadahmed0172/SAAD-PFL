#include <iostream>
using namespace std;

main(){

cout<< " force in newton " <<endl;
int force;
cin>> force;

cout<< " acceleration in meter per second square " ;
int acceleration;
cin>> acceleration;

int mass;
mass = force / acceleration;
cout<< "mass is"<<mass<< "kg";
}
