#include <iostream>
using namespace std;

int SQART(int nums) {
    long long n = nums;

    for (long long i = 0; i < n; i++) {
        if (i * i == n)
            return i;

        if (i * i > n)
            return i - 1;
    }

    return 0;
}

int main() {
    int nums = 10;

    int result = SQART(nums);

    cout << "result : " << result << endl;

    return 0;
}