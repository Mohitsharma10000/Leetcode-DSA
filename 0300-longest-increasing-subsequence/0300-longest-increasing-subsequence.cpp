class Solution {
public:
int solve(vector<int>&nums,int i,int previous,vector<vector<int>>&dp){
    if(i==nums.size()) return 0;
    if(dp[i][previous+1]!=-1) return dp[i][previous+1];
    
    
    int pick=0;
    if(previous==-1||nums[i]>nums[previous]){
        pick=1+solve(nums,i+1,i,dp);
    }
    int notpick=solve(nums,i+1,previous,dp);
    dp[i][previous+1]=max(pick,notpick);
    return dp[i][previous+1];
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(nums,0,-1,dp);

        
        
    }
};