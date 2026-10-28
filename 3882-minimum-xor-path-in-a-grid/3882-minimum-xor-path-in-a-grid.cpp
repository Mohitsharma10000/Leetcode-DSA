class Solution {
public:
int dfs(int i,int j,int x,int n,int m,vector<vector<int>>&grid,vector<vector<vector<int>>>&dp){
    int mini=INT_MAX;
     x^=grid[i][j];
     if(dp[i][j][x]!=-1) return dp[i][j][x];
     if(i==n-1&&j==m-1){
        return x;  
     }
     else {
        if(i+1<n) mini=min(mini, dfs(i+1,j,x,n,m,grid,dp));
        if(j+1<m) mini=min(mini,dfs(i,j+1,x,n,m,grid,dp));
     }
     
     return dp[i][j][x]=mini;
}
    int minCost(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        const int v=1024;
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(v,-1)));
        int ans=dfs(0,0,0,n,m,grid,dp);
        return ans;
        
        
        
    }
};