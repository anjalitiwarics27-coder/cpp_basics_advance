class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for(int i = 0; i < n; i++) {
            // Pop elements that are less than or equal to arr[i]
            while(st.size() > 0 && st.top() <= arr[i]) {
                st.pop();
            }
            ans[i] = (st.size() != 0) ? st.top() : -1;
            st.push(arr[i]);
        }
        return ans;
    }
};