#include <iostream>
using namespace std;

int main(){
    int num, count = 0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=num; i>0; i/=10){
      count = count + 1;
    }
    cout<<"Total digits: "<<count;
    return 0;
}
