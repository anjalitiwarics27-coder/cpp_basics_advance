#include<iostream>
using namespace std;
void digit(int n){
    if(n==0) return;
    digit(n-1);
    cout<<n<<" ";

}
int main(){
    int n ;
    cout<<"Enter the number ";
    cin>>n;
    digit(n);
}