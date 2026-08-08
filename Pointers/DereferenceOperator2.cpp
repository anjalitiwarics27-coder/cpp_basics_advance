#include<iostream>
using namespace std;
int main(){
    int x=139;
    int* p=&x;
    cout<<x<<endl;
    *p=10; // x=10
    cout<<x;
}