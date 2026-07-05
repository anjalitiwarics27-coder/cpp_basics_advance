#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"Enter the base :";
    cin>>a;
    cout<<"enter the power :";
    cin>>b;
    int ans=1;
    for(int i =1;i<=b;i++){
        ans*=a;
        if(a==1)break;   
    }
    if(a==0 && b==0) cout<<"indetermine  form ";
    cout<<ans;
}