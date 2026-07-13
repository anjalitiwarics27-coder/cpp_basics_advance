// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter the rows :";
//     cin>>n;
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" "<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<(char)(i+64)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//.......Method 2 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j)<=n) cout<<" "<<" ";
//             else cout<<(char)(i+64)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }