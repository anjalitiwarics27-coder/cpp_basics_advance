#include<iostream>
using namespace std ;
int main(){
    int num;
    cout<<"Enter the digit :";
    cin>>num;
    if(num>0) {
        cout<<"positive number : "<<num<<endl;
    }
    else {
        cout<<"negative to positive number : "<<(num*(-1))<<endl;
    }
}