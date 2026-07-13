// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j)<=n) cout<<" "<<" ";
//             else cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//   2nd way

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j)>n) cout<<"*"<<" ";
//             else cout<<" "<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//............another approch

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int k=n;k>i;k--){
//             cout<<" "<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//...........3rd approch


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
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }






