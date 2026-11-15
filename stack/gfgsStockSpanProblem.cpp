class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> span(n);
        stack<int> st; // Stores indices of days

        for (int i = 0; i < n; i++) {
            // Pop elements from stack while stack is not empty and 
            // price at top of stack is less than or equal to current price
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }

            // If stack is empty, current price is greater than all preceding prices
            if (st.empty()) {
                span[i] = i + 1;
            } else {
                // Else, span is difference between current index and previous greater index
                span[i] = i - st.top();
            }

            // Push current index onto stack
            st.push(i);
        }

        return span;
    }
};