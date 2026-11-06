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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>arr;
       if(root==nullptr) return arr;
        vector<vector<int>>arr1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
            TreeNode* node=q.front();
            q.pop();

            level.push_back(node->val);
            if(node->left!=nullptr) q.push(node->left);
            if(node->right!=nullptr) q.push(node->right);}
            arr1.push_back(level);
            
        }
        for(int i=0;i<arr1.size();i++){
            double val=0;
            double count=0;
            for(int j=0;j<arr1[i].size();j++){
                val+=(double)(arr1[i][j]);
                count++;

            }
            arr.push_back(val/count);
        }
        return arr;
        
        
    }
};