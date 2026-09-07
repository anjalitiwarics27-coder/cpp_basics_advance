#include <iostream>
#include <vector>
using namespace std;

int upperbound(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int ub = arr.size(); // Default to arr.size() if no element > target exists

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > target) {
            ub = mid;       // Potential upper bound candidate found
            high = mid - 1; // Look for a smaller index to the left
        } else {
            low = mid + 1;  // arr[mid] <= target, move right
        }
    }
    return ub;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 10};
    int target = 7;
    
    int result = upperbound(arr, target);
    cout << "Upper bound index: " << result << endl; // Output: 4 (index of value 9)

    return 0;
}