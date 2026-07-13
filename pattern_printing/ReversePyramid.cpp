// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=2;j<=i;j++){
//             cout<<" "<<" ";
//         }
//         for(int k=2*n-1;k>=2*i+1;k--){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//....................2nd method 


#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the rows :";
    cin>>n;
    int nsp=0, nst=2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*"<<" ";
        }
        nsp++;
        nst-=2;
        cout<<endl;
    }
}