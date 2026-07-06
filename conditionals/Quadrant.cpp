#include<iostream>
using namespace std ;
int main(){
    int x, y;
    cout<<"Enter the x-axis and y-axis ";
    cin>>x>>y;
    if((x>0)&&(y>0)) cout<<"Ist quadrant ";
    else if ((x<0)&&(y>0)) cout<<"2nd quadrant ";
    else if ((x>0)&&(y<0)) cout<<"3rd quardrant ";
    else if ((x<0)&&(y<0)) cout<<"4th quadrant ";
    else cout<<"origin";
}