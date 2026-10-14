class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s = "";

        if (sum > 9 * num)
            return "";

        for (int i = 0; i < num; i++) {
            int digit = min(9, sum);

            s += to_string(digit);
            sum -= digit;
        }

        if (sum != 0)
            return "";

        return s;
    }
};