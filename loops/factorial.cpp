//............method 1...... 

// #include<iostream>
// using namespace std;
// int main(){
//     int n , fact=1;
//     cout<<"enter the digit ";
//     cin>>n;
//     while(n>0){
//         fact=fact*n;
//         n=n-1;
//     }
//     cout<<fact<<endl;
// }

//         here one mistake is here it cannot hold large value for int 
//         only  13 is limit approx 


//...............method 2 


// #include<iostream>
// using namespace std;
// int main(){
//     int n , fact=1;
//     cout<<"enter the digit ";
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         fact *= i; 
//     }
//     cout<<fact<<endl;
// }


//.................method 3 


// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     long long fact=1;
//     cout<<"enter the digit ";
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         fact *= i; 
//     }
//     cout<<fact<<endl;
// }

//-----it can store large value -->only 20 is limit