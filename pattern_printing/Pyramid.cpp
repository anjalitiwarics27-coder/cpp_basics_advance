//............method 1 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" "<<" ";
//         }
//         for(int k=1;k<=i+i-1;k=k+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//.................2nd method 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int k=1;k<=n-i;k++){
//             cout<<" "<<" ";
//         }
//         for(int j=1;j<(2*i);j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//............3rd method extra variables 

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the rows :";
    cin>>n;
    int nsp=n-1, nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*"<<" ";
        }
        nsp--;
        nst+=2;
        cout<<endl;
    }
}