class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<string> st;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "*" || tokens[i] == "/" ||
                tokens[i] == "-") {

                int first = stoi(st.top());
                st.pop();
                int second = stoi(st.top());
                st.pop();
                int final = 0;
                if (tokens[i] == "+")
                    st.push(to_string(first + second));
                else if (tokens[i] == "-")
                    st.push(to_string(second - first));
                else if (tokens[i] == "*")
                    st.push(to_string(first * second));
                else
                    st.push(to_string(second / first));

            } else
                st.push(tokens[i]);
        }

        return stoi(st.top());
    }
};