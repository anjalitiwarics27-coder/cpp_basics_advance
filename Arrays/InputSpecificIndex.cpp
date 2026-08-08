#include<iostream>
using namespace std;
int main(){
    int marks[]={74,96,91,57,62,35};
    cout<<marks[2]<<endl;
    marks[2] =23;  //update
    cout<<marks[2]<<endl;
    cout<<"Enter the marks[2] : ";
    cin>>marks[2];  //input
    cout<<marks[2]<<endl;
}