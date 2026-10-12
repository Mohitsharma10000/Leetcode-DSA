class Solution {
public:
    string convertToBase7(int num) {
        int n=num;
        if (num == 0)
            return "0";
        string st = "";
        if (num < 0) {
            num = -num;
            
        }
        while (num > 0) {
            int rem = num % 7;
            st += to_string(rem);
            num = num / 7;
        }
        if(n<0) st+="-";

        reverse(st.begin(),st.end());

        return st;
    }
};