
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        vector<int> ans(num1.size() + num2.size(), 0);

        for(int i = 0; i < num1.size(); i++) {
            for(int j = 0; j < num2.size(); j++) {

                int a = num1[i] - '0';
                int b = num2[j] - '0';

                int z = a * b + ans[i+j];

                ans[i+j] = z % 10;
                ans[i+j+1] += z / 10;
            }
        }

        string st = "";

        while(ans.size() > 1 && ans.back() == 0) {
            ans.pop_back();
        }

        for(int i = ans.size()-1; i >= 0; i--) {
            st += ans[i] + '0';
        }

        return st;
    }
};
