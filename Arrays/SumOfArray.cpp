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
    cout<<"-------- input ----------"<<endl;
    cout<<"\n";
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        cout<<arr[i]<<endl;
    }
    cout<<"\n";
    cout<<"----sum --------"<<endl;
    cout<<"\n";
    cout<<"sum :"<<sum<<endl;
}