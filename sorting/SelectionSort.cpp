#include <iostream>
#include <vector>
#include <algorithm> // Needed for std::swap

using namespace std;

void print(const vector<int>& arr) {
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 9, 8, 3, 7, 4, 6};
    int n = arr.size();

    // Outer loop moves the boundary of the unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        int mindx = i; // Assume the current element is the minimum
        
        // Inner loop finds the index of the smallest element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mindx]) {
                mindx = j;
            }
        }
        
        // Swap the found minimum element with the first element of the unsorted part
        if (mindx != i) {
            swap(arr[i], arr[mindx]);
        }
    }

    print(arr);
    return 0;
}