class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // Stores indices in decreasing order of their values
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            // 1. Remove indices that are out of the current window's bounds
            if (!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }

            // 2. Remove indices whose corresponding values are smaller than nums[i]
            // (they can never be the maximum while nums[i] is in the window)
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            // 3. Add the current element's index
            dq.push_back(i);

            // 4. Once the first window of size k is formed, record the maximum (at the front)
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }

        return result;
    }
};