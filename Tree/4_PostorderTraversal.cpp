class Solution {
public:
    void postorder(TreeNode* root, vector<int>& ans) {
        // Base case
        if(root == NULL) return;

        // Go to left part
        postorder(root->left, ans);

        // Go to right part
        postorder(root->right, ans);

        // Push into ans(Print Node)
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        
        // call the function
        postorder(root, ans);

        return ans;
    }
};
