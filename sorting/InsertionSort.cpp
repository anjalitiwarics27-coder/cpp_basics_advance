#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    for( int elem :arr){
            cout<<elem<<" ";
        }
        cout<<endl;
}
int main(){
    vector<int>arr={4,1,7,3,9,2,0,8};
    print(arr);
    cout<<"\n";
    int n=arr.size();
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<"\n";
    print(arr);
    cout<<" ";

}