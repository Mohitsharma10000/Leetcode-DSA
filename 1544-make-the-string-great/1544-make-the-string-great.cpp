
class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for(int i = 0; i < s.length(); i++) {
            if(!st.empty() && tolower(st.top()) == tolower(s[i]) && st.top() != s[i]) {
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }

        string x = "";
        while(!st.empty()) {
            x += st.top();
            st.pop();
        }

        reverse(x.begin(), x.end());
        return x;
    }
};
