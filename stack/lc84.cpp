class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int maxArea = 0;
        int n = heights.size();
        for(int i =0 ;i<=n;i++){
            // Use 0 as a sentinel height at the end to flush remaining bars from the stack
            int currentHeight =(i==n)?0:heights[i];
            while (!st.empty()&&currentHeight<heights[st.top()]){
                int h = heights[st.top()];
                st.pop();
                // If stack is empty, the popped bar was the smallest so far, extending all the way to index 0
                int width = st.empty()? i:i-st.top()-1;
                maxArea = max(maxArea, h*width);
            }
            st.push(i);
        }
        return maxArea;
    }
};