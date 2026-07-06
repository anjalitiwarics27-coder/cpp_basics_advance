#include<iostream>
using namespace std ;
int main(){
    int n1,n2,n3;
    cout<<"Enter the n1,n2,n3 :";
    cin>>n1>>n2>>n3;
    if((n1>n2)&&(n1>n3)){
        cout<<"n1 is greatest : "<<n1;
    }
    else if ((n2>n1)&&(n2>n3)){
        cout<<"n2 is greatest :"<<n2;
    }
    else{
        cout<<"n3 is greatest "<<n3;
    }
    return 0;
}
