#include <iostream>
#include <string>
using namespace std;

bool check(string word, char letter)
{
    bool found = false;
    for(int i=0; word[i] != '\0'; i++){
        if(word[i] == letter){
            found = true;
            break;
        }
    }
    return found;
}

int main()
{
    return 0;
}