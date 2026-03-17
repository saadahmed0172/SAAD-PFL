#include <iostream>
using namespace std;

main(){

cout<<" length of video in mins " <<endl;
int length;
cin>> length;
cout<<" frames per second " <<endl;
int fps;
cin>> fps ;
int total_fps;
total_fps = fps*60*length ;
cout<< "frames per second are "<<total_fps<< " . ";
}