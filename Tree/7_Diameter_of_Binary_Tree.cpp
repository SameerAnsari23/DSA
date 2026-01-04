class Solution {
public:
int diameter = 0;
    int solve(TreeNode* root) {
        // Base case
        if (root == NULL) return 0;

        // Move in left part
        int left = solve(root->left);

        // Move in right part
        int right = solve(root->right);

        // Calculate diameter
        diameter = max(diameter, left + right);

        // Go back
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // int diameter = 0;
        solve(root);

        return diameter;
    }
};
