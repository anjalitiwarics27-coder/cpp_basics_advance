//....................Method1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=i;j>=1;j--){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//.....................Method2

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}