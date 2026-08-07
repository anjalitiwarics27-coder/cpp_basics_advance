#include<iostream>
using namespace std;
int x=10;
void change(){
    x=45; // it change the value of x =10 its ist global box 
}
int main(){
    int x=80; // 2nd box x=80
    cout<<x<<endl;
    change();
    cout<<x<<endl; // ist check locally and we print the locally 
}