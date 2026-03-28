#include <iostream>
using namespace std;
int main()
{
    int number[100];
    int n;
    cout<<"how many numbers you have to enter: ";
    cin>>n;
    for(int i=0; i<n ; i++){
        cout<<"enter the number "<<i+1<<": ";
        cin>>number[i];
    }
    for(int i=0; i<n ; i++){
        cout<<"the number at location ["<<i+1<<"] is "<< number[i]<<endl;
    }
    
return 0;

}