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
public: void solve(TreeNode* root,int&mini,int& prev,bool&first){
    if(root==NULL) return;
    solve(root->left,mini,prev,first);
    if(!first)
    mini=min(mini,root->val-prev);
    prev=root->val;
    first=false;
    solve(root->right,mini,prev,first);
}
    int getMinimumDifference(TreeNode* root) {
        int mini=INT_MAX,prev=0;
        bool first=true;
        solve(root,mini,prev,first);
        return mini;

        
    }
};