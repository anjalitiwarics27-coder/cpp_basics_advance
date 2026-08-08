#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={-62,-35,-5,-1,-88,-34};
    int n=sizeof(arr)/4;
    // int n=sizeof(arr)/sizeof(arr[0]);
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx;
}