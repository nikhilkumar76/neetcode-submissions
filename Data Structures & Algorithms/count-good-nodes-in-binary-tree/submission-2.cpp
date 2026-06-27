class Solution {
public:
    int cnt = 0;
    void dfs(TreeNode* root, int max){
        if(root == NULL) return;
        if(root->val >= max) {
            cnt++;
            max = root->val;
        }
        dfs(root->left, max);
        dfs(root->right, max);
    }
    int goodNodes(TreeNode* root) {
        dfs(root, INT_MIN);
        return cnt;
    }
};
