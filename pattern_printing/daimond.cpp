// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the rows: ";
//     cin >> n;
    
//     // Upper pyramid 
//     int nsp = n - 1, nst = 1; // Fixed initialization syntax
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= nsp; j++){
//             cout << " " << " ";
//         }
//         for(int j = 1; j <= nst; j++){
//             cout << "*" << " ";
//         }
//         nsp--;
//         nst += 2; // Fixed increment syntax (nst++2 -> nst += 2)
//         cout << endl; // Fixed typo (ciut -> cout)
//     }
    
//     // Lower Triangle 
//     nsp = 1; // Removed duplicate 'int' declaration
//     int nst_lower = 2 * n - 3; // Renamed or just reassign if you want to reuse nst
    
//     for(int i = 1; i <= n - 1; i++){
//         for(int j = 1; j <= nsp; j++){
//             cout << " " << " ";
//         }
//         for(int j = 1; j <= nst_lower; j++){
//             cout << "*" << " ";
//         }
//         nsp++;
//         nst_lower -= 2;
//         cout << endl;
//     }
    
//     return 0;
// }


//............method 2 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the rows: ";
    cin >> n;
    int nsp = n - 1, nst = 1; 
    for(int i = 1; i <=2* n-1; i++){
        for(int j = 1; j <= nsp; j++){
            cout << " " << " ";
        }
        for(int j = 1; j <= nst; j++){
            cout << "*" << " ";
        }
        if(i<n){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        cout<<endl;
    }
    return 0;
}