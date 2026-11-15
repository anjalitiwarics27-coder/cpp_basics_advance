// class Solution {
// public:
//     bool isValid(string s) {
//        if(s.size()%2 ==1) return false;
//        stack<char>st;
//        for(char ch : s){
//         if(ch=='(' or ch =='[' or ch=='{') st.push(ch);
//         else{ // ch is closing bracket
//             if(st.size()==0) return false ;
//             else if (ch==')' and st.top()=='(') st.pop();
//             else if (ch == ']' and st.top()=='[') st.pop();
//             else if (ch == '}' and st.top()=='{') st.pop();
//             else return false ; 
//             }
//        }
//        return (st.size()==0);
//     }
// };





















// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for (char c : s) {
//             if (c == '(' || c == '[' || c == '{') {
//                 st.push(c);
//             } else {
//                 if (st.empty()) return false;
                
//                 char ch = st.top();
//                 if ((ch == '(' && c != ')') || 
//                     (ch == '{' && c != '}') || 
//                     (ch == '[' && c != ']')) {
//                     return false;
//                 }
//                 st.pop(); 
//             }
//         }
//         return st.empty(); 
//     }
// };