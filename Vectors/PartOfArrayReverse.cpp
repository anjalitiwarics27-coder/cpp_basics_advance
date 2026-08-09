#include<iostream>
#include<vector>
using namespace std;
void print(const vector<int>&arr){
    for(int num :arr){
        cout<<num << " ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={10,20,30,40,50,60};
    print(arr);
    int i=1,j=3;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    print(arr);
}