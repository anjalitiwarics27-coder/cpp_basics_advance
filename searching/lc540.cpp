class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // Ensure mid is even so we always check the first element of a pair
            if (mid % 2 == 1) {
                mid--;
            }
            
            // If the pair matches, single element is on the right
            if (arr[mid] == arr[mid + 1]) {
                low = mid + 2;
            } else {
                // Otherwise, it's on the left (or mid itself)
                high = mid;
            }
        }
        
        return arr[low];
    }
};