#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number of elements in the array: ";
cin>>num;
    int arr[num];
    cout<<"enter "<<num<<" numbers: ";
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    int length = 0;
    for(int i=0; i<num; i++){
        length++;
    }
    for(int i = length - 1 ; i >= 0; i--){
        cout<< arr[i]<<" ";
    }
    return 0;
}