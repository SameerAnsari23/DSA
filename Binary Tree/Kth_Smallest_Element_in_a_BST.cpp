class Solution {
public:
vector<int>ans;
    void solve(TreeNode* root, int k) {
        if(root == NULL) return;

        // Left part
        solve(root->left, k);

        // Store root value in vector
        ans.push_back(root->val);

        // Right part
        solve(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        solve(root, k);
        return ans[k-1];
    }
};
