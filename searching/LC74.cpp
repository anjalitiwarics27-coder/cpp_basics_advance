
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low=0,high = m*n-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            // convert 1d index to 2d coordinates :
            // row = mid/n, col= mid%n
            int val = matrix[mid/n][mid%n];
            if(val==target){
                return true;
            }
            else if(val<target){
                low= mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return false;
        
    }
};