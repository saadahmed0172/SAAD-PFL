#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number of elements: ";
    cin>>a;
    int num[a];
    int count=0;
    cout<<"Enter Numbers one per line: "<<endl;
    for(int i=0;i<a;i++){
        cin>>num[i];

    }
    for(int i=0;i<a;i++){
        if(num[i]%2==0){
            count++;
        }
    }
    cout<<"There are "<<count<<" even numbers";
return 0;
}