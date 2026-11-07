
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        string st = "";

        for(int i = 0; i < num1.size(); i++) {
            int carry = 0;
            string temp = "";

            for(int j = 0; j < num2.size(); j++) {
                int a = num1[i] - '0';
                int b = num2[j] - '0';

                int z = a * b + carry;
                temp += (z % 10) + '0';
                carry = z / 10;
            }

            if(carry != 0)
                temp += carry + '0';

            for(int k = 0; k < i; k++)
                temp = "0" + temp;

            int carry2 = 0;
            string result = "";
            int p = 0, q = 0;

            while(p < st.size() || q < temp.size() || carry2) {
                int sum = carry2;

                if(p < st.size())
                    sum += st[p++] - '0';

                if(q < temp.size())
                    sum += temp[q++] - '0';

                result += (sum % 10) + '0';
                carry2 = sum / 10;
            }

            st = result;
        }

        while(st.size() > 1 && st.back() == '0')
            st.pop_back();

        reverse(st.begin(), st.end());
        return st;
    }
};
