#include<iostream>
using namespace std;
int main(){
    int n,lastdigit, sum=0;
    cout<<"enter the digit :";
    cin>>n;
    while(n!=0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    cout<<"sum :"<<sum;
}