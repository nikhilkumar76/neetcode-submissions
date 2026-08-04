class Solution {
public:
    int ans = INT_MIN;
    int getMax(TreeNode* root){
        if(!root) return 0;
        int left = getMax(root->left);
        int right = getMax(root->right);
        int path = root->val + max(left, right);
        return max(0, path);
    }
    void dfs(TreeNode* root){
        if(!root) return;
        int left = getMax(root->left);
        int right = getMax(root->right);
        ans = max(ans, root->val + left + right);
        dfs(root->left);
        dfs(root->right);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
