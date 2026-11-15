
#include<iostream>
#include<stack>
using namespace std;

// Function to insert element at bottom
void insertAtBottom(stack<int>& st, int val) {
    if(st.empty()) {
        st.push(val);
        return;
    }

    int x = st.top();
    st.pop();

    insertAtBottom(st, val);

    st.push(x);
}

// Reverse stack
void reverseStack(stack<int>& st) {
    if(st.empty()) return;

    int x = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, x);
}

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    reverseStack(st);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
