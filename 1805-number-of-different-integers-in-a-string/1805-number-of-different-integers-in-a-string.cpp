class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> st;
        string num = "";

        for (char ch : word) {
            
            if (isdigit(ch)) {
                num += ch;
            } 
            else {
                if (num != "") {
                    
                    int i = 0;
                    while (i < num.size() && num[i] == '0') {
                        i++;
                    }

                    num = num.substr(i);

                    if (num == "") {
                        num = "0";
                    }

                    st.insert(num);
                    num = "";
                }
            }
        }

        if (num != "") {
            int i = 0;

            while (i < num.size() && num[i] == '0') {
                i++;
            }

            num = num.substr(i);

            if (num == "") {
                num = "0";
            }

            st.insert(num);
        }

        return st.size();
    }
};