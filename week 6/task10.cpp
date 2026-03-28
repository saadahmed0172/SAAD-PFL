#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout<< "enter a string:";
    cin>>str;
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = str[i] + 1;
    }
    cout<< "the modified string is: "<<str<<endl;
    return 0;
}