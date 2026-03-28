#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int arr[100]; 

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) 
            largest = arr[i];
        }
cout << "the largest number is: " << largest << endl;
        return 0;
    
}