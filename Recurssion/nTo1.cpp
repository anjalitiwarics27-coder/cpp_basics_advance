#include<iostream>
using namespace std;
void digit(int n ){
    if(n==0) return ;
    cout<<n<<" ";
    digit(n-1);
}
int main(){
    int n ;
    cout<<"Enter the digit ";
    cin>>n;
    digit(n);
    // int result = digit(n);
    // cout<<"Result "<<result<<endl;
    return 0 ;
}