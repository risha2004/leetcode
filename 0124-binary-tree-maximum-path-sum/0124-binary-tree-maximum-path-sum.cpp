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
    int path(TreeNode*root,int&Maxi){
        if(!root) return 0 ;
        int l=max(0,path(root->left,Maxi));
        int r=max(0,path(root->right,Maxi));
        Maxi = max(Maxi, l + r + root->val);
     
        return max(l,r) + root->val;
    }
    
    int maxPathSum(TreeNode* root) {
        int Maxi=INT_MIN;
         path(root,Maxi);
         return Maxi;
    
    }
};