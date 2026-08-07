#include<iostream>
using namespace std;
void display(int x){
    cout<<"Integer :"<<x<<endl;
}
void display(double x){
    cout<<"Double :"<<x<<endl;
}
void display(char x){
    cout<<"Character :"<<x<<endl;
}
int main(){
    display(9.0);
}