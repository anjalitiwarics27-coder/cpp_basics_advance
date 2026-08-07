#include<iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;
}
void fun(int x){
    cout<<"Good morning"<<endl;
}
void fun(int x, int y ){
    cout<<"Kaise ho "<<endl;
}
int main(){
    fun();
    fun(7);
    fun(4,8);
}