#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(const vector<int>& arr) {
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

int kthSmallest(vector<int> arr, int k) {
    int n = arr.size();
    
    // Run Selection Sort for k passes
    for (int j = 0; j < k; j++) {
        int mn = arr[j], mnIdx = j;
        for (int i = j; i < n; i++) {
            if (arr[i] < mn) {
                mn = arr[i];
                mnIdx = i;
            }
        }
        swap(arr[j], arr[mnIdx]);
    }
    
    // The k-th smallest element is now at index k - 1
    return arr[k - 1];
}

int main() {
    vector<int> arr = {93, 17, 4, 64, 46, 18, 3, 61};
    int k = 4; // Example: Find 4th smallest element

    int result = kthSmallest(arr, k);
    cout << "The " << k << "th smallest element is: " << result << endl;

    return 0;
}