// same naam ke 2 functions ko use krna 
#include<iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;
}
void fun(int x){
    cout<<"Good Morning"<<endl;
}
int main(){
    fun();
}
// here error will occurr due to same function name calling with same data type
// same return type 