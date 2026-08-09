#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int>& arr){
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}

int main(){

    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;

    int n = arr.size();

    // Last k elements store in temp
    vector<int> temp;

    for(int i = n-k; i < n; i++){
        temp.push_back(arr[i]);
    }

    // Shift remaining elements to right
    for(int i = n-k-1; i >= 0; i--){
        arr[i+k] = arr[i];
    }

    // Put temp at beginning
    for(int i = 0; i < k; i++){
        arr[i] = temp[i];
    }

    print(arr);

    return 0;
}