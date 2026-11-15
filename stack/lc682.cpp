// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         vector<int>record;
//         for(const string & op: operations){
//             if(op=="+"){
//                 int n =record.size();
//                 record.push_back(record[n - 1] + record[n - 2]);
//             }
//             else if(op=="D") record.push_back(2*record.back());
//             else if(op=="C") record.pop_back();
//             else record.push_back(stoi(op));
//         }
//         return accumulate(record.begin(),record.end(),0);
//     }
// };




class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (const string& op : operations) {
            if (op == "C") {
                st.pop();
            } else if (op == "D") {
                st.push(2 * st.top());
            } else if (op == "+") {
                int top = st.top();
                st.pop();
                int sum = top + st.top();
                st.push(top);
                st.push(sum);
            } else {
                st.push(stoi(op));
            }
        }

        int score = 0;
        while (!st.empty()) {
            score += st.top();
            st.pop();
        }
        return score;
    }
};










