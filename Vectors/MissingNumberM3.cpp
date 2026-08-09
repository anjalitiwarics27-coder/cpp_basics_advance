#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={3,0,1};
    int ArraySum=0;
    int n =nums.size();
     int ZeroToSum =(n*(n+1)/2);
    for(int i=0;i<nums.size();i++){
        ArraySum+=nums[i];
    }
    int missArray;
    cout<<"Missing :"<<ZeroToSum-ArraySum<<" "<<endl;
}