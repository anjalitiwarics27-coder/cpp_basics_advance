#include<iostream>
using namespace std;
int main(){
    int n =7;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the elements "<<i+1<<":"<<" ";
        cin>>arr[i];
    }
    cout<<"-------result---------"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}