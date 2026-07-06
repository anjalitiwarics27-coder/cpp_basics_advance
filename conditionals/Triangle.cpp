#include<iostream>
using namespace std ;
int main(){
    int n1 , n2 , n3;
    cout<<"Enter the number n1 ,n2,n3  : ";
    cin>>n1>>n2>>n3;
    if(((n1+n2)>n3) &&((n2+n3)>n1)&&((n3+n1)>n2)){
        cout<<"It is a Triangle :";
    }
    else{
        cout<<"It is not Triangle :";
    }
}