#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int>& arr) {
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {5, 4, 3, 6, 2, 1};
    int n = arr.size();
    print(arr);

    // Selection Sort
    for (int j = 0; j < n - 1; j++) {
        int mn = arr[j], mnIdx = j;
        
        for (int i = j + 1; i < n; i++) {
            if (arr[i] < mn) {
                mn = arr[i];
                mnIdx = i;
            }
        }
        
        // Placed INSIDE the outer loop
        swap(arr[j], arr[mnIdx]);
    }

    print(arr);
    return 0;
}