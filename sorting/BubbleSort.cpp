#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
        for( int elem :arr){
            cout<<elem<<" ";
        }
        cout<<endl;
    }
int main(){
    vector<int> arr={5,4,3,6,2,1};
    int n =arr.size();
    cout<<"Unsorted Arary "<<endl;
    print(arr);
    for (int j=0;j<n-1;j++){
        int swaps =0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                swaps++;
            } 
        }
        if(swaps==0) break;
    }
    cout<<"\n";
    cout<<"Sorted Array "<<endl;
    print(arr);
}