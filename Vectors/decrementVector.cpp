#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(5,18);   // index 0 to 4 
    for(int i=0 ;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5);
    arr.push_back(14);
    arr.pop_back();
    arr.push_back(7);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}