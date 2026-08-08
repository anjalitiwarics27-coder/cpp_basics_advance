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
    int maxi=arr[0];
   for(int i=0;i<n;i++){
    if(maxi<arr[i]){
        maxi=arr[i];
        }
   }
   cout<<"Maximum Number : "<<maxi<<endl;
   return 0;
}