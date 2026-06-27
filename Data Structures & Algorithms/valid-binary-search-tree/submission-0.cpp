class Solution {
public:
    bool isvalid(TreeNode* root, int low , int high){
        if(root == NULL) return true;
        else if(!((low < root->val)&&(root->val < high))) return false;
        return isvalid(root->left, low, root->val) && isvalid(root->right, root->val, high);
    }
    bool isValidBST(TreeNode* root) {
        return isvalid(root, INT_MIN, INT_MAX);
    }
};
