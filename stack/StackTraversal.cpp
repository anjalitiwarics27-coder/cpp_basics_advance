#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>& st){
    stack<int> helper;
    // Top to bottom print karo aur helper mein store karo
    while(st.size() > 0){
        cout << st.top() << " ";
        helper.push(st.top()); // Ye line missing thi
        st.pop();
    }
    // Helper se wapas st mein daalo taaki original stack safe rahe
    while(helper.size() > 0){
        st.push(helper.top());
        helper.pop();
    }
    cout << endl;
}

void printBottomToTop(stack<int>& st){
    stack<int> helper;
    while(st.size() > 0){
        helper.push(st.top());
        st.pop();
    }
    while(helper.size() > 0){
        cout << helper.top() << " ";
        st.push(helper.top());
        helper.pop();
    }
    cout << endl;
}

int main(){
    stack<int> st;
    st.push(18); 
    st.push(33);
    st.push(1);
    st.push(45);
    st.push(7);

    // Functions ko yahan call karna zaroori hai
    print(st);            // Output: 7 45 1 33 18
    printBottomToTop(st); // Output: 18 33 1 45 7
    
    return 0;
}