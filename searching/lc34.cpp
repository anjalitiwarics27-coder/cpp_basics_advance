class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int>ans{-1,-1};
        int n = arr.size();
        // first occurance
        int low =0 , high = n-1;
        while(low<=high){
            int mid =(low+high )/2;
            if(arr[mid]>target) high =mid-1;
            else if (arr[mid]<target) low =mid+1;
            else {
                ans[0]=mid;
                high = mid - 1;
            }
        }
        // last occurance 
        low =0;
        high = n-1;
        while(low<=high){
            int mid =low + (high-low)/2;
            if(arr[mid]>target) high = mid -1;
            else if (arr[mid]<target) low =mid+1;
            else{
                ans[1]=mid;
                low = mid+1;
            }
        }
        return ans;
    }
};