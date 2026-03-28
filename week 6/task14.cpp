#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout << "Enter no of resistors: ";
    cin >> n;

    int arr[100]; 

    for (int i = 0; i < n; i++) {
        cout << "Enter resistance of resistors one per line " << i + 1 << ": ";
        cin >> arr[i];
    }
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum = sum + arr[i];
    }
    cout<<"the series resistance: "<<sum<<" ohm"<<endl;
    return 0;
}