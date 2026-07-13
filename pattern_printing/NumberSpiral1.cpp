//...............Method 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter the rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<min(i,j)<<" ";
//         }
//         for(int j=n-1;j>=1;j--){
//             cout<<min(i,j)<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=n;j++){
//             cout<<min(i,j)<<" ";
//         }
//         for(int j=n-1;j>=1;j--){
//             cout<<min(i,j)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//............Method 2 

#include <iostream>
#include <algorithm> // min() function ke liye
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // User se input lene ke liye

    // Grid ka size hamesha (2*n - 1) x (2*n - 1) hoga
    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            
            // Charo boundaries se distance nikalna
            int top = i;
            int bottom = 2 * n - i;
            int left = j;
            int right = 2 * n - j;

            // Sabse chota distance hi current layer ka number hoga
            int min_distance = min({top, bottom, left, right});

            // Agar bahar 1 aur andar 'n' chahiye toh direct min_distance print karein
            cout << min_distance << " ";
        }
        cout << endl; // Row khatam hone par next line
    }
    return 0;
}