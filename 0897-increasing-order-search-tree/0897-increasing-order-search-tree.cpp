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
public:
TreeNode* curr=NULL;
void solve(TreeNode* root,TreeNode* &newroot){
    if(root==NULL) return;
    solve(root->left,newroot);
    if(newroot==NULL){
        newroot=new TreeNode(root->val);
        curr=newroot;
    }
    else{
        curr->right=new TreeNode(root->val);
        curr=curr->right;
    }
    solve(root->right,newroot);
}
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* newroot=NULL;
        solve(root,newroot);
        return newroot;
        
    }
};