class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> exists1(101, false);
        vector<bool> exists2(101, false);

        for (int num : nums1) exists1[num] = true;
        for (int num : nums2) exists2[num] = true;

        int count1 = 0, count2 = 0;

        for (int num : nums1) {
            if (exists2[num]) count1++;
        }

        for (int num : nums2) {
            if (exists1[num]) count2++;
        }

        return {count1, count2};

        
    }
};