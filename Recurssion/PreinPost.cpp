#include<iostream>
using namespace std;
void print(int n ){
    if(n==1) return ; // base case 
    cout<<n<<" "; //work
    print(n-1); // call
    cout<<n<<" ";
    print(n-1); // call
    cout<<n<<" ";
}
int main(){
    int n ;
    cin>>n;
    print(n);
}