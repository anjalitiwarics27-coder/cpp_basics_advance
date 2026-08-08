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
    int search_no;
    cout<<"Enter the element you want to search :"<<" ";
    cin>>search_no;
    cout<<"\n";
    cout<<"------- searching Element ---------"<<endl;
    cout<<"\n";
    int found = 0;
    int index =0 ;
    for(int i=0;i<n;i++){
        if(arr[i]==search_no){
            index=i;
           found++ ;
           break;
        }
    }
    if(found==0){
        cout<<"Element not found"<<search_no<<endl;
    }
    else{
        cout<<"Element found  "<<search_no<<"  "<<" and the index value : "<<index<<endl;
    }
}