class Solution {
public:
    int solve(TreeNode* root) {
        if (root == NULL) return 0;        // Base case

        // Explore Left Subtree
        int left = solve(root->left);
        if(left == -1) return -1;

        // Explore Right Subtree
        int right = solve(root->right);
        if (right == -1) return -1;
        
        // Check balanced or not
        if(abs(left - right) > 1) return -1;

        // Go back
        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        return solve(root) != -1;
    }
};
