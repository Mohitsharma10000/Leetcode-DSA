class Solution {
public:
    int cost(int node, vector<int>& nums, vector<int>& dp, int n) {
        if(node >= n) return 0;

        if(dp[node] != -1) return dp[node];

        int take = nums[node] + cost(node + 2, nums, dp, n);
        int skip = cost(node + 1, nums, dp, n);

        return dp[node] = max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return cost(0, nums, dp, n);
    }
};