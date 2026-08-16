#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]) return false ; 
    }
    cout<<"Sorted";
    return true;

}