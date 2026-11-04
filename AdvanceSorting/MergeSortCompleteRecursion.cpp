#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int elm:arr){
        cout<<elm<<" ";
    }
    cout<<endl;
}
void merge(vector<int>&a,vector<int>&b,vector<int>&c){
    int i=0, j=0, k=0;
    if(a[i]<a[j]) c[k++]=a[i++];
    else c[k++]=b[j++];
    while(i<a.size()) c[k++]=a[i++];
    while(j<b.size()) c[k++]=b[j++];
}
void mergeSrt(vector<int>&arr){
    int n = arr.size();
    if(n==1) return ; //1 sized array
    vector<int>a(n/2);
    vector<int>b(n-n/2);
    int idx =0;// arr ke elemts ke leye 
    for(int i =0 ;i<n/2;i++){
        a[i]=arr[idx]++;
    }
    for(int i =0;i<n-n/2;i++ ){
        b[i]=arr[idx]++;
    }
    mergeSrt(a);
    mergeSrt(b);
    merge(a,b,arr);
    delete(&a);
    delete(&b);

}
int main(){
    vector<int> a = {2,3,6,8};
    vector<int>b = {1,4,5,7,9,10};
    int m = a.size(),n=b.size();
    vector<int>c(m+n);
    merge(a,b,c);
    print(c);
}