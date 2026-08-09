#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 0};
    int Zero_Count = 0;
    int Once_Count = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            Zero_Count++;
        } else {
            Once_Count++;
        }
    }

    // Fill original array with 0s first, then 1s
    for(int i = 0; i < arr.size(); i++){
        if(i < Zero_Count){
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }

    // Print segregated array
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}