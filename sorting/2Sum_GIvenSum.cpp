class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
       int i = 0, j = arr.size() - 1;
        
        while (i < j) {
            int current_sum = arr[i] + arr[j];
            
            if (current_sum == target) {
                return {i + 1, j + 1}; // Return immediately when target is found
            } else if (current_sum > target) {
                j--;
            } else {
                i++;
            }
        }
        
        return {};
        
    }
};