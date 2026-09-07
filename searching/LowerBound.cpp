#include <iostream>
#include <vector>
using namespace std;

int lowerbound(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int lb = arr.size(); // Default to array size if no element >= target is found

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < target) {
            low = mid + 1;
        } else { // arr[mid] >= target
            lb = mid;
            high = mid - 1;
        }
    }
    return lb;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 10};
    int target = 8;
    
    int result = lowerbound(arr, target);
    cout << "Lower bound index: " << result << endl; // Output: 4 (element 9)

    return 0;
}