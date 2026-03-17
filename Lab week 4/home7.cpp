#include <iostream>
using namespace std;

int main(){

string name;
cout<<"enter the name of the shape  ";
cin>>name;
if(name == "square"){
    int side;
    cout<<"enter the side of the square  ";
    cin>>side;
    int area = side * side;
    cout<< "the area of the square is : "<<area;
}
if(name == "rectangle"){
    int length;
    cout<<"enter the length of the rectangle  ";
    cin>>length;
    int width;
    cout<<"enter the width of the rectangle  ";
    cin>>width;
    int area = length * width;
    cout<< "the area of the rectangle is : "<<area;
}
if(name == "circle"){
    int radius;
    cout<<"enter the radius of the circle  ";
    cin>>radius;
    float area = 3.14 * radius * radius;
    cout<< "the area of the circle is : "<<area;
}
if(name == "triangle"){
    int base;
    cout<<"enter the base of the triangle  ";
    cin>>base;
    int height;
    cout<<"enter the height of the triangle  ";
    cin>>height;
    float area = 0.5 * base * height;
    cout<< "the area of the triangle is : "<<area;
}
    return 0;
}