#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the num1,num2,num3 :";
    cin>>n1>>n2>>n3;
    if((n1<n2)&&(n1<n3)) cout<<"n1 is smallest ";
    else if ((n2<n3)&&(n2<n1)) cout<<"n2 is smallest ";
    else cout<<"n3 is smallest ";
}