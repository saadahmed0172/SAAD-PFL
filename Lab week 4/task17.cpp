#include <iostream>
using namespace std;

int main(){

int num1,num2;
cout<<"enter first number:";
cin>>num1;
char op;
cout<<"enter operator :";
cin>>op;
cout<<"enter second number:";
cin>>num2;
if(op == '+' ) {
int result;
result = num1 - num2 ;
    cout<< "your answer is "<<result;
}
if(op == '-' ){
int result;
result = num1 + num2 ;
    cout<< "your answer is "<<result;
}
if(op == '*' ){
int result;
result = num1/num2 ;
    cout<< "your answer is "<<result;
}
if(op == '/'){
int result;
result = num1 * num2 ;
    cout<< "your answer is "<<result;
}
    return 0;
}