#include <iostream>
using namespace std;

int main() {
    int q, d, n, p;
    double due;

    cout << "Enter quarters: "; 
    cin >> q;
    cout << "Enter dimes: "; 
    cin >> d;
    cout << "Enter nickels: "; 
    cin >> n;
    cout << "Enter pennies: "; 
    cin >> p;
    cout << "Enter the total amount due: $"; 
    cin >> due;

    double total = (q * 0.25) + (d * 0.10) + (n * 0.05) + (p * 0.01);

    if (total >= due) {
        cout << "Can you pay the amount? Yes" << endl;
    } else {
        cout << "Can you pay the amount? No" << endl;
    }

    return 0;
}