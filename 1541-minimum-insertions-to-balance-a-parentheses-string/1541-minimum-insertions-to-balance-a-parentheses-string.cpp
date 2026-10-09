class Solution {
public:
    int minInsertions(string s) {
        int balance = 0, close = 0;

        int i = 0;
        while (i < s.length()) {
            if (s[i] == '(') {
                balance++;
            }
            else {
                if (i + 1 < s.length() && s[i + 1] == ')') {
                    i++;
                }
                else {
                    close++;
                }

                if (balance > 0) {
                    balance--;
                }
                else {
                    close++;
                }
            }

            i++;
        }

        return 2 * balance + close;
    }
};