class Solution {
public: void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&heights){
    int n=heights.size(),m=heights[0].size();
    vis[row][col]=1;
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};
    for(int i=0;i<4;i++){
        int nrow=delrow[i]+row;
        int ncol=delcol[i]+col;
        if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&heights[nrow][ncol]>=heights[row][col]){
            dfs(nrow,ncol,vis,heights);
        }

    }
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size(),m=heights[0].size();
        vector<vector<int>>pacific(n,vector<int>(m,0));
        vector<vector<int>>atlantic(n,vector<int>(m,0));
        vector<vector<int>>ans;
        for(int i=0;i<m;i++){
            dfs(0,i,pacific,heights);
        }
        for(int i=0;i<n;i++){
            dfs(i,0,pacific,heights);
        }
        for(int i=0;i<m;i++){
            dfs(n-1,i,atlantic,heights);
        }
        for(int i=0;i<n;i++){
            dfs(i,m-1,atlantic,heights);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pacific[i][j]&&atlantic[i][j]){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
        
        
    }
};