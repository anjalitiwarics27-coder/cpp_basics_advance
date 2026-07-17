#include<iostream>
using namespace std;
int factorial(int n ){
    if(n<=1) return 1;
    return n*factorial(n-1);
}
int combination(int n , int r ){
    return (factorial(n) /(factorial (r) * factorial(n-r)));
    
}
int main(){
    int n , r , result;
    cout<<"Enter the n :";
    cin>>n ;
    cout<<"Enter the r :";
    cin>>r;
    result=combination(n,r);
    cout<<"combination "<<result<<endl;
    return 0;
}