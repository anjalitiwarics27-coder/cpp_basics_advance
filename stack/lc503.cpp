class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1); // Default -1 rakhenge kyunki agar greater nahi mila toh -1 return karna hai
        stack<int> st; // Indices store karne ke liye

        // Circular behavior ke liye loop 2*n tak chalayenge
        for (int i = 0; i < 2 * n; ++i) {
            int current = nums[i % n];

            // Jab tak stack empty nahi hai aur current element stack ke top se bada hai
            while (!st.empty() && nums[st.top()] < current) {
                result[st.top()] = current;
                st.pop();
            }

            // Sirf pehle pass mein hi index push karein
            if (i < n) {
                st.push(i);
            }
        }

        return result;
    }
};