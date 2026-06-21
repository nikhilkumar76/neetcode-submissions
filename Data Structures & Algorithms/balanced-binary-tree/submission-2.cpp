class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int left = height(root->left);
        int right = height(root->right);
        if(abs(right - left) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
