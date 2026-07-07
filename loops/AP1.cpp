//............ Method 1 

// #include<iostream>
// using namespace std ;
// int main(){
//     //-2,5,8,11....
//     int n ;
//     cout<<"Enter the digit : ";
//     cin>>n;
//     for(int i=2;i<=3*n;i=i+3){
//         cout<<i<<" ";
//     }
// }

//............ Method 2 --> AP  

// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for (int i=n;i>=1;i--){
//         cout<<i<<" ";
//     }
//     return 0 ; 
// }


//-------------------------------------


//-------------- Logic 
// a=1
// d=3
// 2a+(n-1)d
// 2+(n-1)3
// 2+3n-3==>3n-1

//........................ Method 3

// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for (int i=1;i<=((3*n)-1);i+=3){
//         cout<<i<<" ";
//     }
//     return 0 ; 
// }

//..................... Method 4

// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int a =2;
//     for (int i=1;i<=n;i+=1){
//         cout<<a<<" ";
//         a=a+3;
//     }
//     return 0 ; 
// }


//.............. Method 5


// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int a =2, d=3;
//     for (int i=1;i<=n;i+=1){
//         cout<<a<<" ";
//         a+=d;
//     }
//     return 0 ; 
// }




