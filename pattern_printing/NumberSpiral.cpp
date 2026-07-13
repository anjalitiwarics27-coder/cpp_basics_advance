// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i<=j) cout<<i<<" ";
//             else cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//.........2nd method

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows : ";
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<min(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}