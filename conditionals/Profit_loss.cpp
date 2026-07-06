#include<iostream>
using namespace std ;
int main(){
    int sp ,cp ;
    cout<<"Enter the selling price :  ";
    cin>>sp;
    cout<<"Enter the cost price : ";
    cin>>cp;
    if(sp>cp) cout<<"Profit : "<< sp-cp;
    else cout<<"Loss : "<< cp- sp ;
}