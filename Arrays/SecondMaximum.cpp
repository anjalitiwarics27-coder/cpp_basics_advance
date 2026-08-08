#include<iostream>
#include<climits>
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
    cout<<"-------result---------"<<endl;
    cout<<"\n";
    n=sizeof(arr)/4;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx)mx=arr[i];
    }
    int smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>smx && arr[i] !=mx)smx=arr[i];
    }
    cout<<"Maximum Number : "<<mx<<" "<<"\n"<<"second maximum  Number :"<<smx<<endl;
}