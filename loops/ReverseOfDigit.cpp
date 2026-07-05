//----------method 1 

// #include<iostream>
// using namespace std ;
// int main(){
//     int n ,lastdigit;
//     cout<<"enter the digit  :";
//     cin>>n;
//     while(n!=0){
//         lastdigit=n%10;
//         cout<<"reverse of the digit: "<<lastdigit;    
//         n=n/10;
//     }
// }

//---------method 2 

// #include<iostream>
// using namespace std ;
// int main(){
//     int n,reverse=0;
//     cout<<"enter the digit  :";
//     cin>>n;
//     while(n!=0){
//         reverse=reverse*10;
//         reverse=reverse+(n%10);
//         n=n/10;
//     }
//     cout<<reverse;
// }


//..............................

// #include<iostream>
// using namespace std ;
// int main(){
//     int n,rev=0;
//     cout<<"enter the digit  :";
//     cin>>n;
//     while(n!=0){
//         rev*=10;
//         rev+=(n%10);
//         n=n/10;
//     }
//     cout<<rev;
// }

//--------------------  method 3 


// #include<iostream>
// using namespace std ;
// int main(){
//     int n,rev=0;
//     cout<<"enter the digit  :";
//     cin>>n;
//     while(n!=0){
//         rev=((rev*10)+(n%10));
//         n=n/10;
//     }
//     cout<<rev;
// }