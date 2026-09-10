#include <iostream>
#include <string>
#include <algorithm> // for swap
using namespace std;

int main() {
    string s;
    cout << "Enter an even length string: ";
    cin >> s;

    int n = s.length();
    
    // Two-pointer approach to reverse the first half (from index 0 to n/2 - 1)
    int i = 0;
    int j = (n / 2) - 1;

    while (i < j) {
        swap(s[i], s[j]); // or manually: char temp = s[i]; s[i] = s[j]; s[j] = temp;
        i++;
        j--;
    }

    cout << "Result: " << s << endl;

    return 0;
}