#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the digit :";
    cin>>n;
    if((n%5==0) &&(n%3==0)) cout<<"number is divisible by 3 and 5 both : "<<n<<endl;
    else if (n%5==0) cout<<"it is only divisible by 5 :"<<n<<endl;
    else if(n%3==0) cout<<"it is only divisible by 3 :"<<n<<endl;
    else cout<<"dont divisible by 3 as well as 5  "<<n<<endl;
}