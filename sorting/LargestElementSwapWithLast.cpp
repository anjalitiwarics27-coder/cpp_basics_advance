#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const vector<int>& arr) {
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {5, 4, 3, 6, 2, 1};
    int n = arr.size();

    cout << "Original Array: ";
    print(arr);

    // Outer loop last index se start hoga aur peeche ki taraf aayega
    for (int j = n - 1; j > 0; j--) {
        int maxIdx = 0; // Maan lete hain ki index 0 par max element hai

        // Index 0 se j tak sabse bada element dhoondho
        for (int i = 1; i <= j; i++) {
            if (arr[i] > arr[maxIdx]) {
                maxIdx = i; // Naya max index update karo
            }
        }

        // Bada element milne par use unsorted part ke last position (j) par swap kar do
        swap(arr[maxIdx], arr[j]);
    }

    cout << "Sorted Array: ";
    print(arr);

    return 0;
}