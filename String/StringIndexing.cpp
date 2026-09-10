#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Sumit Gupta";
    cout<<s.size()<<endl;
    cout<<s[1]<<endl;
    s[0]='z';
    cout<<s<<endl;
}