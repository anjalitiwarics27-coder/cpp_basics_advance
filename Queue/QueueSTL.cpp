
#include<iostream>
#include<queue>
using namespace std;

// Insert element at given index
void push(int idx, int ele, queue<int>& q) {
    int n = q.size();

    if(idx < 0 || idx > n) {
        cout << "Invalid Index!" << endl;
        return;
    }

    // Move first idx elements to back
    for(int i = 0; i < idx; i++) {
        q.push(q.front());
        q.pop();
    }

    // Insert element
    q.push(ele);

    // Restore remaining elements
    for(int i = 0; i < n - idx; i++) {
        q.push(q.front());
        q.pop();
    }
}

// Delete element at given index
void pop(int idx, queue<int>& q) {
    int n = q.size();

    if(idx < 0 || idx >= n) {
        cout << "Invalid Index!" << endl;
        return;
    }

    // Move first idx elements to back
    for(int i = 0; i < idx; i++) {
        q.push(q.front());
        q.pop();
    }

    // Delete element
    q.pop();

    // Restore remaining elements
    for(int i = 0; i < n - idx - 1; i++) {
        q.push(q.front());
        q.pop();
    }
}

// Get element at given index
int get(int idx, queue<int>& q) {
    int n = q.size();

    if(idx < 0 || idx >= n) {
        cout << "Invalid Index!" << endl;
        return -1;
    }

    int ans = -1;

    for(int i = 0; i < n; i++) {
        if(i == idx) {
            ans = q.front();
        }

        q.push(q.front());
        q.pop();
    }

    return ans;
}

// Print queue
void print(queue<int>& q) {
    int n = q.size();

    while(n--) {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }

    cout << endl;
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Original Queue: ";
    print(q);

    push(1, 50, q);

    cout << "After Insertion: ";
    print(q);

    pop(2, q);

    cout << "After Deletion: ";
    print(q);

    cout << "Element at index 1: " << get(1, q) << endl;

    return 0;
}
