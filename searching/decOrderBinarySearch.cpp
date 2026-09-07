#include<iostream>
#include<vector>
using namespace std;
int binarySearch(const vector <int>&arr,int target){
    int low =0;
    int high = arr.size()-1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid; // Element found, return index
        } else if (arr[mid] > target) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }
}
int main(){
    vector<int>arr={91,72,56,38,23,16,12,8,5,2};
    int target = 23;
    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0; 
}