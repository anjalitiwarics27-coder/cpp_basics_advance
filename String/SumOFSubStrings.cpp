#include <iostream>
#include <string>

using namespace std;

long long sumOfSubstringsBruteForce(string s) {
    long long totalSum = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        long long currentNum = 0;
        for (int j = i; j < n; j++) {
            // Build integer digit by digit to avoid repeated substr() calls
            currentNum = currentNum * 10 + (s[j] - '0');
            totalSum += currentNum;
        }
    }

    return totalSum;
}

int main() {
    string s = "926";
    cout << "Sum of all substrings: " << sumOfSubstringsBruteForce(s) << endl;
    return 0;
}