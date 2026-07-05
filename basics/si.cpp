#include<iostream>
using namespace std;
int main(){
    float p ,r,t,si=0,amt ;
    cout<<"enter the p , r, t ";
    cin>>p;
    cin>>r;
    cin>>t;
    si = ((p*r*t)/100);
    amt = p+si;
    cout<<"si : "<<si<<endl<<"float : "<<amt;
}