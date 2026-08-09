#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {3, 0, 1};
    int n = nums.size();
    
    // Create a boolean vector of size n + 1, initialized to false
    vector<bool> flag(n + 1, false);

    // Mark present numbers as true
    for (int i = 0; i < n; i++) {
        flag[nums[i]] = true; // Fixed: changed 'arr' to 'nums'
    }

    // Find the missing number (the index that remains false)
    for (int i = 0; i <= n; i++) {
        if (flag[i] == false) {
            cout << "Missing number: " << i << endl;
            return i;
        }
    }

    return 0;
}