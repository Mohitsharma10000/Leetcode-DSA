class Solution {
public:
    // int cost(int node, vector<int>& nums, vector<int>& dp, int n) {
    //     if(node >= n) return 0;

    //     if(dp[node] != -1) return dp[node];

    //     int take = nums[node] + cost(node + 2, nums, dp, n);
    //     int skip = cost(node + 1, nums, dp, n);

    //     return dp[node] = max(take, skip);
    // }

    // int rob(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int> dp(n, -1);
    //     return cost(0, nums, dp, n);
    // }

    int rob(vector<int>&nums){
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int> dp(n,0);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[n-1];
    }
};