class Solution {
public:
void dfs(int i,vector<vector<int>>&edges,vector<int>&vis){
    vis[i]=1;
    for(auto it:edges[i]){
        if(!vis[it]){
            dfs(it,edges,vis);
        }
    }
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>vis(n,0);
        vector<vector<int>>arr(n);
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            arr[u].push_back(v);
            arr[v].push_back(u);
        }
        
        dfs(source,arr,vis);
        return vis[destination]==1;
       
        
    }
};