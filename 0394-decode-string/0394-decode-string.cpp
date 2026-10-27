class Solution {
public:
    string decodeString(string s) {
        string ss = "";
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ']') {
                string x = "";
                while (!st.empty() && st.top() != '[') {
                    x += st.top();
                    st.pop();
                }
                st.pop();
                int val = 0;
                int p = 1;

                while (!st.empty() && isdigit(st.top())) {
                    val += (st.top() - '0') * p;
                    p *= 10;
                    st.pop();
                }

                reverse(x.begin(), x.end());
                string final = "";
                while (val--) {
                    final += x;
                }
                for (char c : final) {
                    st.push(c);
                }
            } else
                st.push(s[i]);
        }

        while (!st.empty()) {
            ss += st.top();
            st.pop();
        }
        reverse(ss.begin(), ss.end());
        return ss;
    }
};