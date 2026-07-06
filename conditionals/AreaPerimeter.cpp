#include<iostream>
using namespace std;
int main(){
    int l , b;
    cout<<"Enter the lenght :";
    cin>>l;
    cout<<"Enter the breadth :";
    cin>>b;
    int perimeter = (2*(l+b));
    int area = l * b;
    if(perimeter > area ) cout<<"perimeter is greater :"<< perimeter;
    else cout<<" Area is greater : "<<area;
}