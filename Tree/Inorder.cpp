class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans) {
        // Base case
        if(root == NULL) return;
        
        // Go to left most part
        inorder(root->left, ans);
        
        // Push into arr
        ans.push_back(root->val);

        // Go to right 
        inorder(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;

        // Call the function
        inorder(root, ans);

        return ans;
    }
};
