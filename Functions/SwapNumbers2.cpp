#include<iostream>
using namespace std;
int main(){
    int a=0, b=5;
    cout<<a<<" "<<b<<endl;
    a=(a+b)-(b=a);
    cout<<a<<" "<<b<<endl;
}