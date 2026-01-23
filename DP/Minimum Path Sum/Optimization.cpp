class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<int> dp(col);
        dp[0] = grid[0][0];

        // first row
        for (int j = 1; j < col; j++)
            dp[j] = dp[j - 1] + grid[0][j];

        // remaining rows
        for (int i = 1; i < row; i++) {
            dp[0] += grid[i][0];
            for (int j = 1; j < col; j++) {
                dp[j] = grid[i][j] + min(dp[j], dp[j - 1]);
            }
        }

        return dp[col - 1];
    }
};
