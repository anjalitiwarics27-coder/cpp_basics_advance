#include<iostream>
using namespace std;
void sumit(){
    cout<<"Hi Sumit "<<endl;
}
void arjun(){
    cout<<"Hi Arjun"<<endl;
    sumit();
}
void anu(){
    cout<<"Hi Anu "<<endl;
    arjun();
}
int main(){
    anu();
}