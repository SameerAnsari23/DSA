class Solution {
public:
    void preorder(TreeNode* root, vector<int>& ans) {
        // Base case
        if(root == NULL) return;

        // Push into the ans array(Print Node)
        ans.push_back(root->val);

        // Go to left part
        preorder(root->left, ans);

        // Go to right part
        preorder(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;

        // Call the function
        preorder(root, ans);

        return ans;
    }
};
