#include <iostream>
using namespace std;
int main()
{
    int number[5];

    for(int i=0; i<5 ; i++){
        cout<<"enter the number "<<i+1<<": ";
        cin>>number[i];
    }
    cout<<"the number at location [1] is"<< number[0]<<endl;
    cout<<"the number at location [5] is"<< number[4]<<endl;
return 0;

}