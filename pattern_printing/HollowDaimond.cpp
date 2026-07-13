#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (half of diamond): ";
    cin >> n;

    // 1. Upper Hollow Pyramid
    for (int i = 1; i <= n; i++) {
        // Spaces print karne ke liye
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Stars aur beech ke spaces ke liye
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // 2. Lower Hollow Inverted Pyramid
    for (int i = n - 1; i >= 1; i--) {
        // Spaces print karne ke liye
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Stars aur beech ke spaces ke liye
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}