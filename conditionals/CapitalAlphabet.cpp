#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the alphabet :";
    cin>>ch;
    int digit=(char)ch;
    if((digit>64)&&(digit<91)){
        cout<<"It is Capital Alphabet "<<ch<<endl;
    }
    else{
        cout<<"It is not a Capital Alphabet "<<endl;
    }
}




