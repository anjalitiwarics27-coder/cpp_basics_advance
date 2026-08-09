#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={2,7,11,15};
    int n=arr.size();
    int target =9;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"indexes :  "<<i<<" "<<j<<endl;
            }
        }
    }

}