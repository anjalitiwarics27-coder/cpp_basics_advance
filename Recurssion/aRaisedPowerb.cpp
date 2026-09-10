#include<iostream>
using namespace std;
int power(int a ,int b ){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a ;
    cout<<"Enter the base ";
    cin>>a;
    int b ;
    cout<<"Enter the power ";
    cin>>b;
    int ans = power(a,b);
    cout<<a<<"raised to the power "<<b<<"is :"<<ans<<endl;
    return 0;
}