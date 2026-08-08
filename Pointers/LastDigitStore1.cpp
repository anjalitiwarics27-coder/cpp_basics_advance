#include<iostream>
using namespace std;
int countDigits(int n){
    int count=(n==0)?1:0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;

}
int main(){
    int n ;
    cin>>n;
    
}