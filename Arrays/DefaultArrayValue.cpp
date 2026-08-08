#include<iostream>
using namespace std;
int main(){
    int arr[10]={74,96,9,57,62,35,7,12};
    int n=sizeof(arr)/4;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}