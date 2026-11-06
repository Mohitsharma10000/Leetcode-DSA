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
void solve(int &sum,TreeNode* root,int num){
    if(root==nullptr) return;
    num=num*10+root->val;

    if(root->left==nullptr&&root->right==nullptr){
         sum+=num;

    }
    solve(sum,root->left,num);
    solve(sum,root->right,num);
    
}
    int sumNumbers(TreeNode* root) {
        
        int sum=0;
        solve(sum,root,0);
        return sum;

        
    }
};