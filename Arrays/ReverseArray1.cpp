#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" ";
        cin>>arr[i];
    }
    cout<<"\n";
    int i=0;
    int j=n-1;
    while(i<j){
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}