class Solution {
public:void solve(int i,int n,int k,vector<vector<int>>&ans,vector<int>&arr){
    if(arr.size()==k){
        ans.push_back(arr);
        return ;
    }
    if(i>n) return ;
    arr.push_back(i);
    solve(i+1,n,k,ans,arr);
    arr.pop_back();
    solve(i+1,n,k,ans,arr);
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>arr;
        
        solve(1,n,k,ans,arr);
        return ans;
        
    }
};