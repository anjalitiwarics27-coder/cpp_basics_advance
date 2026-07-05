// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the digit ";
//     cin>>n;
//     bool flag =false; // false means prime 
//     for (int i=2;i<=n-1;i++){
//         if(n%i==0){ // factor mil gaya except 1 and n 
//             flag=true;
//             break;
//         }
//     }
//     if (flag==true)cout<<"composite number ";
//     else if(n==1)cout<<"neither prime nor composite :";
//     else cout<<"prime number ";
//     return 0;
// }

// -------------2nd method

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the digit ";
//     cin>>n;
//     int count=0;
//     for (int i=2;i<=n-1;i++){
//         if(n%i==0){
//             count+=1;
//             break;
//         }
//     }
//     if (count!=0)cout<<"composite number ";
//     else if(n==1)cout<<"neither prime nor composite :";
//     else cout<<"prime number ";
//     return 0;
// }

//------------3rd number 

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the digit ";
//     cin>>n;
//     int count=0;
//     for (int i=2;i<=n/2;i++){
//         if(n%i==0){
//             count+=1;
//             break;
//         }
//     }
//     if (count!=0)cout<<"composite number ";
//     else if(n==1)cout<<"neither prime nor composite :";
//     else cout<<"prime number ";
//     return 0;
// }

//-----4th method 


// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the digit ";
//     cin>>n;
//     int count=0;
//     for (int i=2;i*i<=n;i++){
//         if(n%i==0){
//             count+=1;
//             break;
//         }
//     }
//     if (count!=0)cout<<"composite number ";
//     else if(n==1)cout<<"neither prime nor composite :";
//     else cout<<"prime number ";
//     return 0;
// }


//----------5th method 

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the digit ";
//     cin>>n;
//     int count=0;
//     for (int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             count+=1;
//             break;
//         }
//     }
//     if (count!=0)cout<<"composite number ";
//     else if(n==1)cout<<"neither prime nor composite :";
//     else cout<<"prime number ";
//     return 0;
// }


//----------6th method 


// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the digit ";
//     cin>>n;
//     int count=0;
//     for (int i=1;i<=n;i++){
//         if(n%i==0){
//             count+=1;

//         }
//     }
//     if (count>=3)cout<<"composite number ";
//     else if(n==1)cout<<"neither prime nor composite :";
//     else cout<<"prime number ";
//     return 0;
// }
