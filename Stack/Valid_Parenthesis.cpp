class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        // Traverse on string 
        for (int i = 0; i < s.length(); i++) {
            // Push open bracket into stack
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }
            else {
                if (st.empty()) return false;
                char top = st.top();
                // Handle the close bracket
                if ((s[i] == ')' && top != '(') || (s[i] == ']' && top != '[') || (s[i] == '}' && top != '{')) return false;
                st.pop();
            }
        }

        // Check stack is empty
        // if (st.empty()) {
        //     return true;
        // }else {
        //     return false;
        // }

        // Check Valid Parenthesis
        return st.empty();
    }
};
