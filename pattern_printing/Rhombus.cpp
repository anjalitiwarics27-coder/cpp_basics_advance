//.........Method 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter the rows : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" "<<" ";
//         }
//         for(int k=n;k<=((2*n)-1);k++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//..........Method 2

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
//         for(int j=1;j<=n;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }