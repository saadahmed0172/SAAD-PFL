#include <iostream>
using namespace std;

main(){

cout<<"enter paint area " <<endl;
int area;
cin>> area;
cout<<" enter width " <<endl;
int width ;
cin>> width ;
cout<<"enter length " <<endl;
int length;
cin>> length;
int painted_walls;
painted_walls = area/(width*length)  ;
cout<< " walls painted "<<painted_walls<< " . ";
}