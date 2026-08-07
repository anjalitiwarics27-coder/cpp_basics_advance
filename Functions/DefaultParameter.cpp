#include<iostream>
using namespace std;
void power(int base , int exponent =2){ // default variable =2 
    int ans=1;
    for(int i=0;i<exponent;i++){
        ans *=base;
    }
    cout<<ans<<endl;
}
int main(){
    power(5);
    power(5,3);
}