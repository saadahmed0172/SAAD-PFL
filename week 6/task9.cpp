#include <iostream>
using namespace std;
int main()
{
    char word[100];
    cout<<"enter a word: ";
    cin>>word;
    int length = 0;
    for(int i = 0; word[i] != '\0'; i++){
        length++;
    }
    for(int i = length - 1 ; i >= 0; i--){
        cout<< word[i];
    }
    return 0;
}