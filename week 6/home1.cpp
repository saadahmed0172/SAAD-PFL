#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter number of elements: ";
    cin>>n1;
    int num[n1];
    cout<<"Enter Numbers one per line: "<<endl;
    for(int i=0;i<n1;i++){
        cin>>num[i];

    }
    int sum=0;
    for(int i=0;i<n1;i++){
        sum=sum+num[i];
    }
    cout<<"Sum of all elements: "<<sum;
    return 0;
}