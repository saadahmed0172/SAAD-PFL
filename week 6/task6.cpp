#include <iostream>
using namespace std;
int main()
{
    int number[5] = {1,2,3,4,5};
    int sum = 0;
    float average;
    for(int i=0; i<5 ; i++){
        sum = sum + number[i];
    }
    average = sum/5.0;
    cout<<"the sum of the numbers is "<<sum<<endl;
    cout<<"the average of the numbers is "<<average<<endl;

    
return 0;

}