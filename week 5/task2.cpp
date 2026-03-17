#include <iostream>
using namespace std;

int main(){
cout<<"Enter number: ";
int num;
cin>>num;
cout<<"Enter digit: ";
int digit1;
cin>>digit1;

int count;
for(int i=num; i> 0; i/=10){             //itrates to every digit
if(i%10 == digit1){                         //seperates the last digit and compares with the digit from the user
  count++;
}
}
cout<<"Frequency of "<<digit1<<" in "<<num<<" is: "<<count;
return 0;
}