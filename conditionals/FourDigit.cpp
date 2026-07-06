#include<iostream>
using namespace std ;
int main (){
    int n;
    cout<<"Enter the digit :";
    cin>>n;
    if((n>=1000) &&(n<=9999)) cout<<"its a  four digit number :";
    else cout<<"it is not four digit number ";
}