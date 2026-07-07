
//...............Method 1 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if ((i%2!=0) && (i%3==0)){
//             cout<<i<<" ";
//         }
//     }
// }

//----------------- Method 2


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=n;i=i+2){
//         if(i%3==0)
//             cout<<i<<" ";
//     }
// }




//...........Method 3 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=3;i<=n;i=i+6){
            cout<<i<<" ";
    }
}



