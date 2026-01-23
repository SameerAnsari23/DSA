class Solution {
public:
    int solve(vector<vector<int>>& grid, int i, int j, int row, int col) {
        // destination
        if (i == row - 1 && j == col - 1)
            return grid[i][j];

        // last row → only right
        if (i == row - 1)
            return grid[i][j] + solve(grid, i, j + 1, row, col);

        // last column → only down
        if (j == col - 1)
            return grid[i][j] + solve(grid, i + 1, j, row, col);

        return grid[i][j] + min(
            solve(grid, i + 1, j, row, col),
            solve(grid, i, j + 1, row, col)
        );
    }

    int minPathSum(vector<vector<int>>& grid) {
        return solve(grid, 0, 0, grid.size(), grid[0].size());
    }
};
