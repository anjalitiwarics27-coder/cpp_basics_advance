#include<iostream>
using namespace std;
void fun(int x, char ch){
    cout<<"int , char"<<endl;
}
void fun(char ch ,int x){
    cout<<"char ,int"<<endl;
}
int main(){
    fun(7,'t');
    fun('t',7);
    return 0;
}
// use any type of datatype