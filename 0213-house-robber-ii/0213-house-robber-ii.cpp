class Solution {
public:
    int cost(int node, vector<int>& nums, vector<int>& dp, int n) {
        if(node > n) return 0;

        if(dp[node] != -1) return dp[node];

        int take = nums[node] + cost(node + 2, nums, dp, n);
        int skip = cost(node + 1, nums, dp, n);

        return dp[node] = max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n, -1);
         vector<int> dp2(n, -1);
        int sum1=cost(0, nums, dp1, n-2);
        int sum2=cost(1,nums,dp2,n-1);
        int maxi=max(sum1,sum2);
        return maxi;
    }
};