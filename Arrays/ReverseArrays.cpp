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
    int temp=0;
    for(int i=0;i<n/2;i++){
            int temp=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=temp;
        }
        cout<<"\n------Reversed Array--------\n";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
}