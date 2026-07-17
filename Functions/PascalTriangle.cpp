#include<iostream>
using namespace std;
int factorial(int n ){
    if(n<=1) return 1;
    return n*factorial(n-1);
}
int ncr(int n, int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}
int main(){
    int n ;
    cout<<"Enter n :";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}