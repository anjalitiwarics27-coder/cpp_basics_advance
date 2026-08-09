#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    // reverse array 
    reverse(arr.begin(),arr.end());
    cout<<"----reverse Array-----"<<endl<<" \n "<<endl;
    for(int elem : arr){
        cout<< elem <<" "<<endl;
    }
    int k=3;
    int j=k-1;
    int i=0;
    while(i<j){
        int temp =0 ;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;

    }
    cout<<"----Ist Half  Array-----"<<endl<<" \n "<<endl;
    for(int elem : arr){
        cout<< elem <<" "<<endl;
    }
    i=k;
    j=arr.size()-1;
    while(i<j){
        int temp=0;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"------ 2nd half --------"<<endl<<"\n"<<endl;
    for(int elem : arr){
        cout<<elem<<" "<<endl;
    }
    cout<<endl;
    return 0;

}