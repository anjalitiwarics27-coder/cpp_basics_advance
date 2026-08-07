#include<iostream>
using namespace std;
void fun(char c){
    cout<<"Hi"<<endl;
}
void fun(int x){
    cout<<"Good Morning "<<endl;
}
void fun(double x){
    cout<<"Kaise ho "<<endl;
}
int main(){
    fun(7.0);
}