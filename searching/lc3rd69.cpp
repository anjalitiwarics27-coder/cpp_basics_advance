#include <iostream>
using namespace std;

int SQART(int n) {
    if (n < 2) return n;
    
    long low = 1, high = n / 2;
    int ans = 0;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        
        if (mid * mid == n) {
            return mid;
        } else if (mid * mid < n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return ans;
}

int main() {
    int nums = 10;
    int result = SQART(nums);
    cout << "result : " << result << endl; // Output: 3
    return 0;
}