/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public: void solve(TreeNode* root,unordered_map<int,int>&mp){
    if(root==NULL) return;
    solve(root->left,mp);
    mp[root->val]++;
    solve(root->right,mp);
}
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mp;
        vector<int>ans;
        solve(root,mp);
        int maxi=0;
        for(auto x:mp){
            maxi=max(maxi,x.second);
        }
        for(auto x:mp){
            if(x.second==maxi) ans.push_back(x.first);
        }
        return ans;

        
    }
};