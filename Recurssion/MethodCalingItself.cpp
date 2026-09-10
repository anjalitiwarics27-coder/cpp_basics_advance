#include<iostream>
#include<string>
using namespace std;
void deeksha(int n ){
    if(n==0) return;
    cout<<"deeksha"<<endl;
    deeksha(n-1);
}
int main(){
    int n ;
    cout<<"Enter the number  ";
    cin>>n;
    deeksha(n);
}