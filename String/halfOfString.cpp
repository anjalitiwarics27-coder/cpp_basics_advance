#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "SriLakshmi";
    int n = s.length(); // n = 10
    
    // Starting index is n / 2 (index 5)
    // The second parameter (length) is optional when taking the rest of the string
    cout << s.substr(n / 2) << endl; 
    
    return 0;
}