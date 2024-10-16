class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = nullptr;
        for(int i = 0; i < preorder.size(); i++) {
            root = insert(root, preorder[i]);
        }
        return root;
    }

    TreeNode* insert(TreeNode* root, int d) {
      
        if(root == nullptr) {
            return new TreeNode(d);
        }
  
        if(d < root->val) {
            root->left = insert(root->left, d);
        } else {
            root->right = insert(root->right, d);
        }
        return root;
    }
};