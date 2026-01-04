class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;                     // Create queue of Node type
        q.push(root);                          // Push root node into queue
      
        while(!q.empty()) {
            if(root == NULL) return ans;

            int size = q.size();
            vector<int>level;                  // For storing each level node  

            for(int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);

                if(node->left != NULL) q.push(node->left);       // Check left
                if(node->right != NULL) q.push(node->right);     // Check right 
                
            }
            ans.push_back(level);              // Store each level into ans 
        }
        return ans;
    }
};
