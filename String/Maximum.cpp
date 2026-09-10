#include<iostream>
using namespace std;

int main() {
    int arr[] = {123, 23, 456, 182, 940, 2901};
    int n = 6;

    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    cout << "Maximum element = " << max;

    return 0;
}