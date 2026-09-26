class Solution {
public:
    string toHex(int num) {
        if (num == 0)
            return "0";

        string hex = "0123456789abcdef";
        string ans = "";

        while (num != 0) {
            int digit = num & 15;   // last 4 bits
            ans += hex[digit];

            num = (unsigned int)num >> 4;  // unsigned right shift
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};