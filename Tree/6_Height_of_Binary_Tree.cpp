class Solution {
public:
    int maxDepth(TreeNode* root) {
        // Base case
        if (root == NULL) return 0;

        // Move in left most part
        int left = maxDepth(root->left);

        // Move in right most part
        int right = maxDepth(root->right);
        
        // Go back
        return 1 + max(left, right);
    }
};
