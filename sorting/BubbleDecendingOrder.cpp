#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1,2,3,4,78,12,10,89,5,6,7,8};
    int n = arr.size();

    cout << "Unsorted Array: " << endl;
    print(arr, n);

    for(int i = 0; i < n-1; i++){
        int swaps = 0;

        for(int j = 0; j < n-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaps++;
            }
        }

        if(swaps == 0)
            break;
    }

    cout << "\nSorted Array: " << endl;
    print(arr, n);
}