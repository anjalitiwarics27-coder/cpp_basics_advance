#include<iostream>
using namespace std;
int factorial(int n ){
    if(n<=1) return 1;
    return n * factorial(n-1);
}
int permutation(int n , int r ){
    return factorial(n)/factorial(n-r);
}
int main(){
    int n , r, result;
    cout<<"Enter the n :";
    cin>>n;
    cout<<"Enter the r : ";
    cin>>r;
    result=permutation(n,r);
    cout<<"result :"<<result;
    return 0;

}