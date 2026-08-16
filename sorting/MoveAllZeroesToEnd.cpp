#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    for(int elem: arr){
        cout<<elem<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={1,2,0,3,4,5,0,0};
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]==0){
                swap(arr[j+1],arr[j]);
            } 
        }
    }
    print(arr);

}