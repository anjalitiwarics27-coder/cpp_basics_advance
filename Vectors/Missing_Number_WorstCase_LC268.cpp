#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 0, 1}; 
    int n = arr.size();

    // Check every number from 0 to n
    for (int i = 0; i <= n; i++) {
        bool flag = false;
        
        for (int elem : arr) {
            if (i == elem) {
                flag = true;
                break;
            }
        }

        if (flag == false) {
            cout << "Missing number: " << i << endl;
            return 0;
        }
    }
}