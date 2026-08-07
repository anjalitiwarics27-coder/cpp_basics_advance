#include<iostream>
using namespace std;
void fun(int age = 20){
    cout<<"My age is : "<<age<<endl;
}
int main(){
    fun(26);
    fun( );
}