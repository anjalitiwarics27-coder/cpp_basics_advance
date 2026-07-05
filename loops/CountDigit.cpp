//--------------------method 1 

// #include<iostream>
// using namespace std ;
// int main(){
//     int n ,num ;
//     cout<<"enter the digit :";
//     cin>>n;
//     int count=0;
//     if(n==0) count++;
//     if(n<0)n =-n   // -ve number ->+ve converstion 
//     while(n>0){
//         num=n%10;
//         count=count+1;
//         n=n/10;   
//     }
//     cout<<"count of digit :" <<count;   
// }

//---------method 2 

// #include<iostream>
// using namespace std ;
// int main(){
//     int n  ;
//     cout<<"enter the digit :";
//     cin>>n;
//     int count=0;
//     if(n==0) count++;
//     while(n!=0){   // good method to solve -ve digit as well as 
//         n=n/10;
//         count=count+1;   
//     }
//     cout<<"count of digit :" <<count;   
// }

// one mistake here 0-> print 0 , answer should be 1 


//--------------method 3 


// #include<iostream>
// using namespace std ;
// int main(){
//     int n ,num ;
//     cout<<"enter the digit :";
//     cin>>n;
//     int count=0;
//     if(n==0) count++;
//     if(n<0) n=-n ;
//     while(n/=10){  
//         count=count+1;    
//     }
//     cout<<"count of digit :" <<count+1;   
// }

