class Solution {
public:
    void dfs(int i, int j, long long &sum, vector<vector<int>>& grid, int n, int m) {
        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0)
            return;

        sum += grid[i][j];
        grid[i][j] = 0;

        dfs(i, j+1, sum, grid, n, m);
        dfs(i+1, j, sum, grid, n, m);
        dfs(i, j-1, sum, grid, n, m);
        dfs(i-1, j, sum, grid, n, m);
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size(), count = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] != 0) {
                    long long sum = 0;
                    dfs(i, j, sum, grid, n, m);

                    if(sum % k == 0)
                        count++;
                }
            }
        }

        return count;
    }
};