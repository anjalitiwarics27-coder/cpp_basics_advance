#include<iostream>
#include<string>
using namespace std;
int main(){
    string x ="abc";
    string y ="xyz";
    if(x==y) cout<<"Same"<<endl;
    else cout<<"NOT Same "<<endl;
    if(x>y) cout<<x<<" is greater than "<<y<<endl;
    else cout<<y<<" is greater than "<<x<<endl;
}