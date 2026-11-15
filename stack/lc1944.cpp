class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> answer(n, 0);
        stack<int> st; // Monotonic decreasing stack storing heights
        
        // Traverse from right to left
        for (int i = n - 1; i >= 0; --i) {
            int count = 0;
            
            // Pop all people shorter than the current person; they are all visible
            while (!st.empty() && st.top() < heights[i]) {
                st.pop();
                count++;
            }
            
            // If someone taller remains on the stack, the current person can see them too (and stops there)
            if (!st.empty()) {
                count++;
            }
            
            answer[i] = count;
            st.push(heights[i]);
        }
        
        return answer;
    }
};