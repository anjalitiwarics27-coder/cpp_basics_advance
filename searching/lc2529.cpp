class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        // find index of the first element >=0 (Count of negative numbers)
        int negCount=lower_bound(nums.begin(), nums.end(),0) -nums.begin();
        // Find index of the first element > 0 (First positive number)
        int postIndex = upper_bound(nums.begin(),nums.end(),0)-nums.begin();
        int postCount= n-postIndex;
        return max(negCount,postCount);
        
    }
};