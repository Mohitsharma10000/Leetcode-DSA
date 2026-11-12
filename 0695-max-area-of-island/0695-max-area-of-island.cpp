class Solution {
public:
void dfs(int row,int col,int &sum,vector<vector<int>>&grid,int &maxi,vector<vector<int>>&vis){
    vis[row][col]=1;
    int n=grid.size(),m=grid[0].size();
    sum+=1;
   
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};
    for(int i=0;i<4;i++){
        int nrow=delrow[i]+row;
        int ncol=delcol[i]+col;
        if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&grid[nrow][ncol]==1){
            dfs(nrow,ncol,sum,grid,maxi,vis);
        }
    }

    
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0;
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&grid[i][j]==1){
                int sum=0;

                dfs(i,j,sum,grid,maxi,vis);
                maxi=max(maxi,sum);}
                
            }
        }
        return maxi;
        
    }
};