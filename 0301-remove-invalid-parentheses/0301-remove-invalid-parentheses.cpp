class Solution {
public:

    set<string> ans;

    void backtrack(string& s, int index, int leftRemove,
                   int rightRemove, int balance, string& st) {

        // String complete ho gayi
        if (index == s.length()) {

            if (leftRemove == 0 &&
                rightRemove == 0 &&
                balance == 0) {

                ans.insert(st);
            }

            return;
        }

        // '('
        if (s[index] == '(') {

            // Option 1: '(' ko remove karo
            if (leftRemove > 0) {

                backtrack(s, index + 1,
                          leftRemove - 1,
                          rightRemove,
                          balance,
                          st);
            }

            // Option 2: '(' ko rakho
            st.push_back('(');

            backtrack(s, index + 1,
                      leftRemove,
                      rightRemove,
                      balance + 1,
                      st);

            st.pop_back();
        }

        // ')'
        else if (s[index] == ')') {

            // Option 1: ')' ko remove karo
            if (rightRemove > 0) {

                backtrack(s, index + 1,
                          leftRemove,
                          rightRemove - 1,
                          balance,
                          st);
            }

            // Option 2: ')' ko rakho
            if (balance > 0) {

                st.push_back(')');

                backtrack(s, index + 1,
                          leftRemove,
                          rightRemove,
                          balance - 1,
                          st);

                st.pop_back();
            }
        }

        // Normal character
        else {

            st.push_back(s[index]);

            backtrack(s, index + 1,
                      leftRemove,
                      rightRemove,
                      balance,
                      st);

            st.pop_back();
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        int leftRemove = 0;
        int rightRemove = 0;

        // Minimum number of '(' and ')' remove karne hain
        for (char c : s) {

            if (c == '(') {

                leftRemove++;
            }
            else if (c == ')') {

                if (leftRemove > 0) {
                    leftRemove--;
                }
                else {
                    rightRemove++;
                }
            }
        }

        string st = "";

        backtrack(s, 0,
                  leftRemove,
                  rightRemove,
                  0,
                  st);

        vector<string> arr;

        for (auto x : ans) {
            arr.push_back(x);
        }

        return arr;
    }
};