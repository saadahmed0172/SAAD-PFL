#include <iostream>
using namespace std;

int main(){

string password,userpassword ;
password= "pass@123!";
cout<<"enter your password:";
cin>>userpassword;
if(userpassword == password){
    cout<< "wow !you have cracked the password";
}
else{
    cout<< "it is not that easy to crack the password";
}
    return 0;
}