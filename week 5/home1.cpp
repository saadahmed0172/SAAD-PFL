#include <iostream>
using namespace std;

int main(){
char ch ='y';
while(ch != 'n' && ch!='N'){
    cout<<"I am Happy"<<endl;
    cout<<"Enter your choice: ";
    cin >>ch;
}
return 0;
}