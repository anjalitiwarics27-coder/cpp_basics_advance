#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of elem : ";
    cin>>n;
    cout<<"\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the elements "<<i+1<<":"<<" ";
        cin>>arr[i];
    }
    cout<<"\n";
    cout<<"------- Negative Number ---------"<<endl;
    cout<<"\n";
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            cout<<arr[i]<<endl;
        }    
    }
}