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
    int mini=arr[0];
   for(int i=0;i<n;i++){
    if(mini>arr[i]){
        mini=arr[i];
        }
   }
   cout<<"Minimum Number : "<<mini<<endl;
   return 0;
}