class Solution {
public:
    void bfs(int i, int j, vector<vector<bool>>& vis,
             vector<vector<char>>& grid) {
        vis[i][j] = true;
        queue<pair<int, int>> q;
        q.push({i, j});
        int m = grid.size();
        int n = grid[0].size();
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            int row = it.first;
            int col = it.second;
            vector<int> delRow = {-1, 0, 1, 0};
            vector<int> delCol = {0, 1, 0, -1};
            for (int i = 0; i < 4; i++) {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                    grid[nrow][ncol] == '1' && vis[nrow][ncol] == false) {
                    vis[nrow][ncol] = true;
                    q.push({nrow, ncol});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' && vis[i][j] == false) {
                    cnt++;
                    bfs(i, j, vis, grid);
                }
            }
        }
        return cnt;
    }
};