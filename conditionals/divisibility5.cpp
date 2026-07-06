#include<iostream>
using namespace std ;
int main (){
    int num ;
    cout<<"Enter the number : ";
    cin>>num;
    if(num%5==0){
        cout<<"divisibility by 5 :"<<num;
    }
    else{
        cout<<"Do not divisible by 5 "<<num;
    }
}