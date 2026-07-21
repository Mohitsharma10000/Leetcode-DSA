class Solution {
    private:
    bool dfs(int node,vector<vector<int>>&adj,vector<int>& vis,vector<int>& pathvis,vector<int>& check){
        vis[node]=1;
        pathvis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfs(it,adj,vis,pathvis,check)==true) return true;
            }
            else if(pathvis[it]) return true;
        }
        check[node]=1;
        pathvis[node]=0;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        
        vector<vector<int>>adj=graph;
        
        vector<int> vis(n, 0);
        vector<int> pathvis(n, 0);
        vector<int> check(n, 0);
        vector<int>safenode;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,adj,vis,pathvis,check);
            }
        }
        for(int i=0;i<n;i++){
            if(check[i]==1) safenode.push_back(i);
        }
        return safenode;

    }
};