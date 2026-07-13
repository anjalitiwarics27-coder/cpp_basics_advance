#include<iostream>
using namespace std;
void ThreeNumberSum(int x, int y, int z ){
    int sum=0;
    sum=x+y+z;
    cout<<"Sum of Three Number :"<<sum<<endl;
}
int main(){
    int x,y,z;
    cout<<"Enter the value of x :";
    cin>>x;
    cout<<"Enter the value of y :";
    cin>>y;
    cout<<"Enter the value of z: ";
    cin>>z;
    ThreeNumberSum(x,y,z);

}