class Solution {
public:
    int solve(vector<vector<int>>& grid, int i, int j,
              int row, int col, vector<vector<int>>& dp) {

        if (i == row - 1 && j == col - 1)
            return grid[i][j];

        if (dp[i][j] != -1)
            return dp[i][j];

        if (i == row - 1)
            return dp[i][j] = grid[i][j] + solve(grid, i, j + 1, row, col, dp);

        if (j == col - 1)
            return dp[i][j] = grid[i][j] + solve(grid, i + 1, j, row, col, dp);

        return dp[i][j] = grid[i][j] + min(
            solve(grid, i + 1, j, row, col, dp),
            solve(grid, i, j + 1, row, col, dp)
        );
    }

    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<vector<int>> dp(row, vector<int>(col, -1));
        return solve(grid, 0, 0, row, col, dp);
    }
};
