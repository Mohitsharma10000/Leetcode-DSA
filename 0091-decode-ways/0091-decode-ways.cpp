class Solution {
public:
    int solve(int i, vector<int>&dp, string s) {
        if (i == s.length()) {
            return 1;
        }
        if (s[i] == '0')
            return 0;
        if(dp[i]!=-1) return dp[i];
       int ans= solve(i + 1, dp, s);
        if (i + 1 < s.length()) {
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');

            if ( num <= 26) {
               ans+= solve(i + 2, dp, s);
            }
        }
         return dp[i]=ans;
    }
    int numDecodings(string s) {
        vector<int>dp(s.length(),-1);
        return solve(0, dp, s);
        
    }
};