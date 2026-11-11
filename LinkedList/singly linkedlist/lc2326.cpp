class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> arr(m, vector<int>(n, -1));
        
        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;
        ListNode* temp = head;
        
        while (minr <= maxr && minc <= maxc && temp != nullptr) {
            // 1. Top Wall (Left to Right)
            for (int j = minc; j <= maxc && temp != nullptr; j++) {
                arr[minr][j] = temp->val;
                temp = temp->next;
            }
            minr++;
            
            // 2. Right Wall (Top to Bottom)
            for (int i = minr; i <= maxr && temp != nullptr; i++) {
                arr[i][maxc] = temp->val;
                temp = temp->next;
            }
            maxc--;
            
            // 3. Bottom Wall (Right to Left)
            for (int j = maxc; j >= minc && temp != nullptr; j--) {
                arr[maxr][j] = temp->val;
                temp = temp->next;
            }
            maxr--;
            
            // 4. Left Wall (Bottom to Top)
            for (int i = maxr; i >= minr && temp != nullptr; i--) {
                arr[i][minc] = temp->val;
                temp = temp->next;
            }
            minc++;
        }
        
        return arr;
    }
};