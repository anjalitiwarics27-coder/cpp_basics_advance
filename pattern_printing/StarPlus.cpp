#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int mid=n-(n/2);
        for(int j=1;j<=n;j++){
            if((i==mid)||(j==mid)){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}
// j=1,j=2,j=3,j=4,j=5
// i=1 # # * # #
// i=2 # # * # #
// i=3 * * * * *
// i=4 # # * # #
// i=5 # # * # #