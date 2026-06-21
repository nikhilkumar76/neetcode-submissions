class Solution {
public:
    int helper(TreeNode* root, int& res){
        if(root == NULL) return 0;
        int left = helper(root->left, res);
        int right = helper(root->right, res);
        res = max(res, left + right);
        return 1 + max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        helper(root, res);
        return res;
    }
};
