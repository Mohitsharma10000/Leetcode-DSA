class Solution {
public:
    void binary( int n, vector<int>& ans) {
        int count = 0;
        while (n > 0) {
            int t = n % 2;
            n = n / 2;
            if (t == 1) {
                count++;
            }
        }
        ans.push_back(count);
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++)
            binary(i, ans);
        return ans;
    }
};