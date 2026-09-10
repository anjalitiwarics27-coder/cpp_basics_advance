#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Anjali Tiwari";
    int count = 0;
    int n = name.length();

    for (int i = 0; i < n; i++) {
        // Convert to lowercase or explicitly check uppercase vowels ('A', 'E', 'I', 'O', 'U')
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U') {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}