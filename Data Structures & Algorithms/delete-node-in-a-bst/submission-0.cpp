class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
        if(root->val > key) root->left = deleteNode(root->left , key);
        else if(root->val < key) root->right = deleteNode(root->right, key);
        else{
            if(!root->left) return root->right;
            if(!root->right) return root->left;
            TreeNode* cur = root->right;
            while(cur->left) cur = cur->left;
            root->val = cur->val;
            root->right = deleteNode(root->right, root->val);
        }
        return root;
    }
};