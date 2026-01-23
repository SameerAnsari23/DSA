class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<vector<int>> dp(row, vector<int>(col));

        dp[0][0] = grid[0][0];

        // first row
        for (int j = 1; j < col; j++)
            dp[0][j] = grid[0][j] + dp[0][j - 1];

        // first column
        for (int i = 1; i < row; i++)
            dp[i][0] = grid[i][0] + dp[i - 1][0];

        // rest cells
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[row - 1][col - 1];
    }
};
