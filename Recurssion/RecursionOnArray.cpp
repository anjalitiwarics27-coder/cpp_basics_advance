#include<iostream>
#include<vector>
using namespace std;
void printRec(vector<int>& arr,int idx ){
    if(idx == arr.size()) return ;
    printRec(arr,idx+1);
    cout<<arr[idx]<<" ";
}
int main(){
    vector<int> arr={5,8,2,534,8,235,-8521};
    printRec(arr,0);
}