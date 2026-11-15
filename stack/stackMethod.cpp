
#include<iostream>
#include<stack>
using namespace std;

class MyStack {
private:
    stack<int> st;

public:

    // 1. PUSH - Insert element
    void push(int val) {
        st.push(val);
        cout << val << " pushed successfully!" << endl;
    }

    // 2. POP - Delete top element
    void pop() {
        if(st.empty()) {
            cout << "Stack is Empty!" << endl;
            return;
        }

        cout << "Deleted element: " << st.top() << endl;
        st.pop();
    }

    // 3. GET - Get top element
    int get() {
        if(st.empty()) {
            cout << "Stack is Empty!" << endl;
            return -1;
        }

        return st.top();
    }

    // 4. SIZE - Total elements
    int size() {
        return st.size();
    }

    // 5. EMPTY - Check stack empty
    bool empty() {
        return st.empty();
    }

    // 6. DISPLAY - Traversal
    void display() {
        if(st.empty()) {
            cout << "Stack is Empty!" << endl;
            return;
        }

        stack<int> temp = st;

        cout << "Stack elements: ";

        while(!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }

        cout << endl;
    }

    // 7. CLEAR - Delete all elements
    void clear() {
        while(!st.empty()) {
            st.pop();
        }

        cout << "Stack cleared!" << endl;
    }

    // 8. SWAP - Swap two stacks
    void swapStack(MyStack &s) {
        st.swap(s.st);
    }
};

int main() {

    MyStack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();

    cout << "Top element: " << st.get() << endl;

    cout << "Stack size: " << st.size() << endl;

    cout << "Is Empty: " << st.empty() << endl;

    st.pop();

    st.display();

    cout << "Top element: " << st.get() << endl;

    cout << "Stack size: " << st.size() << endl;

    st.clear();

    cout << "Is Empty: " << st.empty() << endl;

    return 0;
}
