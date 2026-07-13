// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<i+i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<(2*i);j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

///.........3rd method (3rd variable )

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows :";
    cin>>n;
    int stars=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=stars;j++){
            cout<<"*"<<" ";
        }
        stars+=2;
        cout<<endl;
    }
    return 0;
}