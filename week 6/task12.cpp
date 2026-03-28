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

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                cout << "already entered number is: " << arr[j] << endl;
            }
        }

    }

    return 0;
}