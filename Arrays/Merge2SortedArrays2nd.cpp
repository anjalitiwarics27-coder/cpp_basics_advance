#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 40, 70, 90};
    int b[] = {30, 50, 60, 80};
    
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    int c[m + n];

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    // Merge largest elements first into the end of array c
    while (i >= 0 && j >= 0) {
        if (a[i] > b[j]) {
            c[k--] = a[i--];
        } else {
            c[k--] = b[j--];
        }
    }

    // Copy remaining elements of b, if any
    while (j >= 0) {
        c[k--] = b[j--];
    }

    // Copy remaining elements of a, if any
    while (i >= 0) {
        c[k--] = a[i--];
    }

    // Print merged array
    for (int idx = 0; idx < m + n; idx++) {
        cout << c[idx] << " ";
    }

    return 0;
}