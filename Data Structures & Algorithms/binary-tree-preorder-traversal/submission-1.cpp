class Solution {
public:
    vector<int> res;

    void helper(TreeNode* root){
        if(!root) return;
        res.push_back(root->val); // ROOT first (preorder)
        helper(root->left);
        helper(root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        res.clear();     // important
        helper(root);
        return res;
    }
};