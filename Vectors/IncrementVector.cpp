#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(5,18);
    int n=arr.size();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5);
    arr.push_back(14);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}