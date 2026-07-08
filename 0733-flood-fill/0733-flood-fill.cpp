class Solution {
private:
    void dfs(int sr, int sc, vector<vector<int>>& image,
             vector<vector<int>>& ans, int color, int delrow[], int delcol[],
             int ini) {
        int n = image.size();
        int m = image[0].size();
        ans[sr][sc] = color;
        for (int i = 0; i < 4; i++) {
            int nrow = sr + delrow[i];
            int ncol = sc + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                image[nrow][ncol] == ini && ans[nrow][ncol] != color)
                dfs(nrow, ncol, image, ans, color, delrow, delcol, ini);
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        vector<vector<int>> ans = image;
        int ini = image[sr][sc];
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        dfs(sr, sc, image, ans, color, delrow, delcol, ini);
        return ans;
    }
};