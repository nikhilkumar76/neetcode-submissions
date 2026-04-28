class Solution {
public:
    vector<int> res;

    void helper(TreeNode* root){
        if(!root) return;
        helper(root->left);
        helper(root->right);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        res.clear();     // important
        helper(root);
        return res;
    }
};